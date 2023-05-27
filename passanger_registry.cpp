#include<iostream>
#include<string>
#include "ticket.h"
#include <cstring>

using namespace std ;


int main()
 {
  
cout<<"\tWelcome To Our Ticket Service\n";

destinations passanger[10];

destinations *ptr;
ptr = &passanger[0];

travel_destinations(ptr);

/* passanger_detail passanger_1;

        passanger_1.firstName = "kirub";
        passanger_1.lastName = "getch";
        passanger_1.phoneNumber = "0930630075";
        passanger_1.emailAdress ="kirub@gmail.com";


        cout << "\tDear Customer Here is Your Ticket\n";
       cout << "Your Full Name......\t\t" << passanger_1.firstName + " " + passanger_1.lastName;

         cout << "\nYour phone number...........\t" <<passanger_1.phoneNumber;
        cout << "\nYour email adress.......\t" <<passanger_1.emailAdress;*/

cout << "Your arrival city......\t" << passanger[0].city;
cout << "\n distance from cemtral city...........\t" << passanger[0].distance;
cout << "\ndirection from the central city.......\t" << passanger[0].direction;


return 0;
}
