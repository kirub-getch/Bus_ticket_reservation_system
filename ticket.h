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
    string emailAdress;
    
};

extern destinations destinationRecord[];



void travel_destinations(destinations *passanger);
