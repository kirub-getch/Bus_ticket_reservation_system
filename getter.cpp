#include <iostream>
#include <string>
#include <cctype>
#include "ticket.h"
#include <utility>
#include <chrono>
#include <iomanip>


using namespace std;

 void getPhoneNumber(passenger_detail* passenger)
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
    passanger->phoneNumber = move(pnum);
    }

void getEmailAddress(passenger_detail* passenger)
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
      

      passanger->emailAddress = move(email);
}
 

void get_departure_date(passenger_detail* passenger) {
    // Set the specific date and time
    int year = 2023;
    int month;
    int day;
    int hour = 12;
    int minute = 30;
    int second = 0;


    // Obtain the current month
    tm* timeInfo = localtime(&currentTime);
    int currentMonth = timeInfo->tm_mon + 1; // tm_mon is zero-based, so add 1 to get the actual month
    int currentDay = timeInfo->tm_mday ;

    do{
    bool invalidDate = false;

    // Accept passenger input for the month and day
    cout << "Enter month of departure ("<< currentMonth <<"-12): ";
    cin >> month;
    cout << "Enter day of departure: ";
    cin >> day;

    // Check if the entered month is valid
    if (month < currentMonth || day <= currentday)
     {
        cout << "Invalid month or date entered. month and day cannot be less than curent date." << endl;
        invalidDate = true;
    }
    } while (invalidDate);

    
    // Create a time_point based on the provided date and time
        Time specificTime =
        Time(chrono::seconds(0)) +
        chrono::hours(hour) +
        chrono::minutes(minute) +
        chrono::seconds(second) +
        chrono::days(day - 1) +
        chrono::months(month - 1) +
        chrono::years(year - 1900);

    passenger->boardingTime = specificTime;
}
