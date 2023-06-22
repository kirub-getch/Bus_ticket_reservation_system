#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void getPassengerDetail(passengerDetail *passenger)
{
    cout<<"please fill in the detail of the passenger"<<endl;

   
    cin.ignore();
    
    cout<<"enter first name:";
    getline(cin ,passenger->firstName);

    cout<<"enter middle name:";
     getline(cin ,passenger->middleName);

     cout<<"enter last name:";
    getline(cin ,passenger->lastName);
    
    passenger->emailAddress = getEmailAddress();
    
   passenger->phoneNumber = getPhoneNumber( );

    get_departure_date(passenger);

    

}