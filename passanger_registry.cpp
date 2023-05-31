#include<iostream>
#include<string>
#include "ticket.h"


using namespace std ;

/*void travel_destinations(destinations *passanger)
{
  string arrival;

  cout << "please enter your arival city :";
  getline(cin, arrival);

  for (int i = 0; i < 10; i++)
  {
    if (destinationRecord[i].city == arrival)
    {
      passanger->city = destinationRecord[i].city;
      passanger->distance = destinationRecord[i].distance;
      passanger->direction = destinationRecord[i].direction;
    }
    else if (i == 9 && (destinationRecord[i].city != arrival))
    {
      cout << "please enter the city's name correctly , dont forget to start with a capital letter\n";
      break;
    }
  }
}
*/

int main()
{
  
cout<<"\tWelcome To Our Ticket Service\n";

destinations passanger[10];

destinations *ptr;
ptr = &passanger[0];

travel_destinations(ptr);



cout << "\nYour arrival city......\t" << passanger[0].city;
cout << "\n distance from cemtral city...........\t" << passanger[0].distance;
cout << "\ndirection from the central city.......\t" << passanger[0].direction;


return 0;
}
/* passanger_detail passanger_1;

        passanger_1.firstName = "kirub";
        passanger_1.lastName = "getch";
        passanger_1.phoneNumber = "0930630075";
        passanger_1.emailAdress ="kirub@gmail.com";


        cout << "\tDear Customer Here is Your Ticket\n";
       cout << "Your Full Name......\t\t" << passanger_1.firstName + " " + passanger_1.lastName;

         cout << "\nYour phone number...........\t" <<passanger_1.phoneNumber;
        cout << "\nYour email adress.......\t" <<passanger_1.emailAdress;*/