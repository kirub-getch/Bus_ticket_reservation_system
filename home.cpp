#include<iostream>
#include<string>
#include <vector>
#include "ticket.h"



using namespace std ;


int main()
{
 

 cout<<"\t***##Welcome To Our Online Ticket Service##****\n"
  <<" Please note that currently only tickets from regoinal cities to Addis Abeba  are available \n"
  <<"--------------------------------------------------------------------------------------------\n";

 vector<passengerDetail> passengers;


    char response = 'y';
    static int choice;

    while (true)
     {
        
        cout<<"1.Buy a ticket\n"
            <<"2.Search for trip\n"
            <<"3.exit\n"
            <<"\nEnter choice :";
         cin>>choice;
         cin.ignore();

         switch(choice)
         {
            case 1:
            {
             cout << "BOOKING PASSANGER\n"
                  <<"----------------------------\n";
             bool result = bookTrip(passengers);

              if (!result)
               {
                  // Booking was cancelled
                   return 0;
               }
                break;
             }
            
            case 2:
            {
             cout << "SEARCH TRIP\n"
                  <<"----------------------------\n";
             string lastName, ticketNumber;
              cout << "Enter last name: ";
              cin >> lastName;
              cout << "Enter ticket number: ";
              cin >> ticketNumber;

              searchPassenger(passengers, lastName, ticketNumber);

             break;
            }
            case 3:
            {
                return 1;
            }
            default:
            {
                cout<<"invalid choice\n";
                return 1;
            }
         }

     }
return 0;
}
