#include <iostream>
#include "ticket.h"

using namespace std ;

bool payment(passengerDetail* passenger) 
{
    int ticketPrice = (passenger->distance * 2.4);
        ticketPrice = ticketPrice - ticketPrice%50;
   int termination = 1;
    while (termination)
     {
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Please enter the amount to pay: ";
        int amount;
        cin >> amount;
        cin.ignore();

        
        if (amount == ticketPrice)
           {
            cout << "\nPayment successful. Thank you!\n" << endl;
            termination = 0;
            break;
           } 
        else
         {
            cout << "Insufficient payment. Please pay the specified amount\n "
            <<"*** Enter x to cancel payment \t ***Enter any other letter to procced: ";
            char choice;
            cin >> choice;

            if (choice == 'x' || choice == 'X')
             {
                cout << "Payment canceled. Thank you!" << endl;
                return false;
             }
        }
      }
    return true;
}
