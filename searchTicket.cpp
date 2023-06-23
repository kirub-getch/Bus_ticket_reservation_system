#include "ticket.h"

using namespace std;

void searchPassenger(vector<passengerDetail>& passengers, const string& lastName, const string& ticketNumber) 
{
    for (auto& passenger : passengers) {
        if (passenger.lastName == lastName && passenger.ticketNumber == ticketNumber) {
            printTicket(passenger);

            while (true) {
                cout << "Choose an operation to perform: " << endl;
                cout << "1. Change Seat" << endl;
                cout << "2. Change Day" << endl;
                cout << "Enter your choice (1-2): ";
                int choice;
                cin >> choice;

                switch (choice) {
                    case 1: {
                        assignSeatNumber(passenger, passengers);
                        cout << "Seat changed successfully!" << endl;
                        break;
                    }
                    case 2: {
                        get_departure_date(&passenger);
                        cout << "Day changed successfully!" << endl;
                        break;
                    }
                    default: {
                        cout << "Invalid choice. Please try again." << endl;
                        continue;
                    }
                }

                break;
            }
            return; // Exit the function if passenger is found
        }
    }

    // If passenger is not found
    cout << "Passenger not found." << endl;
}

