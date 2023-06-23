
#include "ticket.h"

using namespace std;


#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;



void choose_destinations(passengerDetail *passenger)
{
    string arrival;
    bool validCity = false;

    cout<<"\n**DESTINATION** \n"
    <<"---------------------------"<<endl;

    while (!validCity)
    {
        cout << "Please enter your arrival city: ";
       
        getline(cin, arrival);

        if (!arrival.empty()) {
        arrival[0] = toupper(arrival[0]);}

        for (int i = 0; i < 10; i++)
        {
            if (destinationRecord[i].city == arrival)
            {
                passenger->city = destinationRecord[i].city;
                passenger->distance = destinationRecord[i].distance;
                validCity = true;
                cout<<"\nDestination :"<<passenger->city<<endl;
                break;
            }
        }

        if (!validCity)
        {
            cout << "\n##Invalid city name ,Please enter the city's name correctly.!!\n";
        }
    }
     cout<<"\n**DEPARTURE DATE** \n"
    <<"---------------------------"<<endl;
        get_departure_date(passenger);
}
