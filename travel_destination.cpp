#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void travel_destinations(destinations *passanger)
{
    string arrival;

    cout << "please enter your arival city :";
    getline(cin, arrival);

    for (int i = 0; i < 10; i++)
    {
        if (destinationRecord[i].city == arrival)
        {
            passanger->city = destinationRecord[i].city;
            passanger->distance = destinationRecord[i].distance;
            passanger->direction = destinationRecord[i].direction;
        }
        else if (i == 9 && destinationRecord[i].city != arrival)
        {
            cout << "please enter the city's name correctly , dont forget to start with a capital letter\n";
            break;
        }
    }
}
