#include <iostream>
#include <string>
#include <cctype>
#include "ticket.h"
#include <utility>
#include <chrono>
#include <iomanip>


using namespace std;

 string getPhoneNumber()
    {
     
     string pnum;

     cout<<"please enter your phone number :";
    getline(cin , pnum);

     for(int i = 0; pnum[i];i++)
     {
      if(isdigit(pnum[i]) && (pnum.length() == 10))
         continue;
      else
      {
        cout<<"The phone number you intered is not correct "<<"Please enter again ...\n";
        return getPhoneNumber();
      } 
    }
    return pnum;
    }

string getEmailAddress()
{
      string email;
      string target = "@gmail.com";
      string target2 =" ";
      

      cout<<"please enter your email adress :";
      getline(cin ,email);
       
       //checks if the string contais @gmail.com and assign bool true or false
       bool found = email.find(target) != string::npos;
      //checks if the string contais space character and assign bool true or false
       bool space = !(email.find(target2) != string::npos);
      //checks if the strings length is less than and assign bool true or false
       bool len = email.length() < 30;
      //checks if @gmail.com is the end of our string
       bool ending = email[email.find(target) + 10] == '\0';
       

      if(!found || !space || !len || !ending)
          {
           cout<<"you have enterd an invalid email ,please enter a proper format :\n";
           return getEmailAddress();
          }
      

      return email;
}
 

#include <iostream>
#include <chrono>

using namespace std;

void get_departure_date(passengerDetail* passenger) {
    // Set the specific date and time
    
    int month;
    int day;
    

    // Get the current time
    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    // Obtain the current month
    tm* timeInfo = localtime(&currentTime);
    int currentMonth = timeInfo->tm_mon + 1; // tm_mon is zero-based, so add 1 to get the actual month
    int currentDay = timeInfo->tm_mday;
    int currentime = timeInfo->tm_hour;
    int currentminutes = timeInfo->tm_min;

    bool invalidDate = false;

    do {
        // Accept passenger input for the month and day
        cout << "Enter month of departure (" << currentMonth << "-12): ";
        cin >> month;
        cout << "Enter day of departure: ";
        cin >> day;
        cin.ignore();

        // Check if the entered month and day are valid
        if (month < currentMonth || (month == currentMonth && day <= currentDay) || day > 30 || month > 12) {
            cout << "Invalid month or date entered. Month and day cannot be less than the current date." << endl;
            invalidDate = true;
        } else {
            invalidDate = false;
        }
    } while (invalidDate);

    // Create a time_point based on the provided date and time
    auto specificTime = now - chrono::hours(currentime)  + chrono::hours(12 + 24*(day - currentDay)) - chrono::minutes(currentminutes - 30) + chrono::hours(24*30*(month - currentMonth)) ;
        

        

        auto time = chrono::system_clock::to_time_t(specificTime);
        cout << "\nDeparture date : " << put_time(localtime(&time), "%Y-%b-%d %H:%M") << endl;

    passenger->boardingTime = specificTime;
}
