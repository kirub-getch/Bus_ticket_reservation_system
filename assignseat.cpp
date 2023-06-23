#include "ticket.h"




 void assignSeatNumber(passengerDetail& passenger, const vector<passengerDetail>& passengers) 
 {
    int seatNumber;

    while (true) {
        cout << "Please choose a seat number (1-60): ";
        cin >> seatNumber;

        // Check if the seat number is within the valid range
        if (seatNumber < 1 || seatNumber > 60) {
            cout << "Invalid seat number. Please choose a seat between 1 and 60." << endl;
            continue;
        }

        // Check if the seat number is already occupied by another passenger with the same destination and departure date
        bool isOccupied = false;
        for (const auto& otherPassenger : passengers) {
            if (otherPassenger.seatNumber == seatNumber &&
                otherPassenger.city == passenger.city &&
                otherPassenger.boardingTime == passenger.boardingTime) {
                isOccupied = true;
                break;
            }
        }

        if (isOccupied) {
            cout << "Seat number " << seatNumber << " is already occupied" << endl;
        } else {
            // Assign the seat number to the passenger
            passenger.seatNumber = seatNumber;
            cout << "\nSeat number " << seatNumber << " assigned to the passenger.\n" << endl;
            break;
        }
    }
}

