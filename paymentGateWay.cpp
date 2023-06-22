#include <iostream>
#include "ticket.h"

using namespace std ;

bool payment(passenger_detail* passenger) 
{
    double ticketPrice = passenger->distance * 2.4;

    while (true)
     {
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Please enter the amount to pay (or enter -1 to cancel): ";
        double amount;
        cin >> amount;

        
        if (amount >= ticketPrice)
           {
            cout << "Payment successful. Thank you!" << endl;
            return true;
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
}
