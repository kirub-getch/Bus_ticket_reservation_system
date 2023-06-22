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

vector<passenger_detail> passengers;


    char response = 'y';

    while (response == 'y' || response == 'Y')
     {
        passenger_detail passenger;

       travel_destinations(&passenger);

       take_in_detail(&passenger);

      cout << "\nproceed to payment? (y/n): ";
      cin >> response;
      if(respose == 'n' || response =='N')
      {
         cout<<"\n*****Booking Cancelled******\n";
         return 1;
      }

       payment(&passanger);
       bool paymentSuccess = payment(&passenger);
        if (!paymentSuccess)
        {
         cout << "Payment was canceled. No ticket issued.\n";
         return 1;
        }

       generate_ticket_number(&passanger);

       passengers.push_back(passenger); 

       

        cout << "Do you want to book another trip? (y/n): ";
        cin >> response;
    }

return 0;
}
