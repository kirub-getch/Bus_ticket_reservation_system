#pragma once

#include <stdlib.h>
#include <utility>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

#define Time chrono::system_clock::time_point
#define true 1
#define false 0

using namespace std;

struct destinations
{
    string city;
    //destination or arrival city
   int distance;
    //distance in km from the selected city to the capital city
  
};

/*this is a structure that contains passengerDetail*/
struct passengerDetail
{
    string firstName;
    string middleName;
    string lastName;
    string phoneNumber;
    string emailAddress;
    string city;
    // destination or arrival city
    int distance;
    // distance in km from the selected city to the capital city
   
    Time boardingTime;
    int seatNumber;
    string ticketNumber;
};
extern destinations destinationRecord[10];

string getPhoneNumber( );

string getEmailAddress();

void get_departure_date(passengerDetail* passenger);

void choose_destinations(passengerDetail *passenger);

void getPassengerDetail(passengerDetail *passenger);

void printTicket(const passengerDetail& passenger);
//generates ticket number using the current time
void generate_ticket_number(passengerDetail *passenger);

bool payment(passengerDetail* passenger);

void searchPassenger(vector<passengerDetail>& passengers, const string& lastName, const string& ticketNumber);

void assignSeatNumber(passengerDetail& passenger, const vector<passengerDetail>& passengers);

bool bookTrip(vector<passengerDetail>& passengers);
