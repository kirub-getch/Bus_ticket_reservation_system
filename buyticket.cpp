#include "ticket.h"

using namespace std;

bool bookTrip(vector<passengerDetail>& passengers) 
{

    passengerDetail passenger;

    choose_destinations(&passenger);

    getPassengerDetail(&passenger);

    char response;
    cout << "\nProceed to payment? (y/n): ";
    cin >> response;
    cin.ignore();

    if (response == 'n' || response == 'N') {
        cout << "\n***** Booking Cancelled *****\n";
        return false;
    }

    bool paymentSuccess = payment(&passenger);

    if (!paymentSuccess) {
        cout << "Payment was canceled. No ticket issued.\n";
        return false;
    }*/

    assignSeatNumber(passenger , passengers);

    generate_ticket_number(&passenger);

    passengers.push_back(passenger);

    cout << "Ticket issued successfully:\n"
         <<"----------------------------\n";

    printTicket(passenger);

    return true;
}

