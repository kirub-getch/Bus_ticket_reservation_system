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

    while (response == 'y' || response == 'Y')
     {
        passengerDetail passenger;

      choose_destinations(&passenger);

       getPassengerDetail(&passenger);

      cout << "\nproceed to payment? (y/n): ";
      cin >> response;
      if(response == 'n' || response =='N')
      {
         cout<<"\n*****Booking Cancelled******\n";
         return 1;
      }

       payment(&passenger);
       bool paymentSuccess = payment(&passenger);
        if (!paymentSuccess)
        {
         cout << "Payment was canceled. No ticket issued.\n";
         return 1;
        }

       generate_ticket_number(&passenger);

       passengers.push_back(passenger); 

       

        cout << "Do you want to book another trip? (y/n): ";
        cin >> response;
    }

return 0;
}
