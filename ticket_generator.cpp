#include <iostream>
#include <string>
#include <chrono>
#include <random>
#include <utility>
#include <cctype>
#include "ticket.h"

using namespace std ;


void generate_ticket_number(passanger_detail *passanger) {
    // Get the current system time
    auto now = chrono::system_clock::now();
    auto time = chrono::system_clock::to_time_t(now);

    // Convert the time to a string
    string timeString = to_string(time);

    // Generate a random number
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1000, 9999);
    int randomNumber = distribution(generator);

    //taking the first 3 letters of the destination city
    string cityId = (passanger->city).substr(0, 3);
    for(char &c : cityId)
       {c = toupper(c);}

    // Combine the time string and random number to generate the ticket number
     string Tno = cityId + timeString + to_string(randomNumber);

    if (Tno.length() > 8)
     {
        Tno = Tno.substr(0, 8);
     }
     

    passanger->ticketNumber = move(Tno);
}