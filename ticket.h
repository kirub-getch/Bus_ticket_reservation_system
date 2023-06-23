#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <chrono>
#include <iomanip>


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
