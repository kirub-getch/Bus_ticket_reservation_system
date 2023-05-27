/*#pragma once*/
#include <iostream>
#include <cstring>
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
   const int distance;
    //distance in km from the selected city to the capital city
   const int direction;
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

destinations travel_destinations(destinations *passanger);

destinations destinationRecord[10] ={{"Bahirdar", 497 ,north},
                                    {"Gondar", 663, north },
                                    {"Hawassa", 285, south },
                                    {"Dire Dawa", 510,east},
                                    {"Dessie", 400 , north},
                                    {"Jimma",352, west},
                                    {"Mekele",932, north},
                                    {"Asosa",664, west},
                                    {"Harar",529, east},
                                    {"Arba Minch",435,south}};
