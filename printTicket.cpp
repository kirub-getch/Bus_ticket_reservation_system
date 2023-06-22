#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "ticket.h"

using namespace std;

void printTicket(const passengerDetail &passenger) {
    cout << "Passenger Name: " << passenger.firstName << " " << passenger.lastName << endl;
    cout << "City: " << passenger.city << endl;

    auto time = chrono::system_clock::to_time_t(passenger.boardingTime);
    cout << "Boarding Time: " << put_time(localtime(&time), "%Y-%b-%d %H:%M") << endl;

    cout << "Seat Number: " << passenger.seatNumber << endl;
    cout << "Ticket Number: " << passenger.ticketNumber << endl;
    cout << endl;
}
