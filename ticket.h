#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <chrono>
#include <iomanip>


#define Time chrono::system_clock::time_point

using namespace std;

struct destinations
{
    string city;
    //destination or arrival city
   int distance;
    //distance in km from the selected city to the capital city
   int direction;
    //direction of the selected city from the capital city
};

/*this is a structure that contains passanges detail*/
struct passanger_detail
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
    int direction;
    // direction of the selected city from the capital city
    Time boardingTime;
    int seatNumber;
    string ticketNumber;
};

void getPhoneNumber(passanger_detail* passenger);

void getEmailAddress(passanger_detail* passenger);

void get_departure_date(passanger_detail* passenger);

void choose_destinations(passanger_detail *passanger);

void getPassangerDetail(passanger_detail*passanger);

void print_ticket(const passanger_detail& passenger);
//generates ticket number using the current time
void generate_ticket_number(passanger_detail *passanger);

extern destinations destinationRecord[10];

bool payment(passanger_detail* passenger);
