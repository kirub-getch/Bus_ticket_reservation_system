#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;


void choose_destinations(passanger_detail *passanger)
{
    string arrival;
    
       cout << "please enter your arival city :";
       cin.ignore();
       getline(cin, arrival);

    for (int i = 0; i < 10; i++)
    { 
    
        if (destinationRecord[i].city == arrival)
        {
            passanger->city = destinationRecord[i].city;
            passanger->distance = destinationRecord[i].distance;
            passanger->direction = destinationRecord[i].direction;

            break;
        }
        else if (i == 9 && (destinationRecord[i].city != arrival))
        {
           cout << "please enter the city's name correctly , dont forget to start with a capital letter\n";
           //break out of the loop if the person after 3 wrong trial
            cout << "please enter your arival city :";
             cin.ignore();
            getline(cin, arrival);  
           
           // resting the loop so that it takes input again
            i = 0;
        }
    }
}
