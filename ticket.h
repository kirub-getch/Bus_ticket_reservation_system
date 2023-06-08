#pragma once
#include <iostream>
#include <string.h>
#include <stdlib.h>

#define yes 1
#define no 0
#define north 1
#define south 2
#define east 3
#define west 4

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
    string lastName;
    string phoneNumber;
    string emailAddress;
    string city;
    // destination or arrival city
    int distance;
    // distance in km from the selected city to the capital city
    int direction;
    // direction of the selected city from the capital city
};

string getEmailAddress();

string getPhoneNumber();

void travel_destinations(passanger_detail *);

void take_in_detail(passanger_detail *);

void display_detail(passanger_detail * );

extern destinations destinationRecord[10];
