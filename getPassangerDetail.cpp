#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void getPassangerDetail(passanger_detail*passanger)
{
    cout<<"please fill in the detail of the passanger"<<endl;

   
    cin.ignore();
    
    cout<<"enter first name:";
    getline(cin ,passanger->firstName);

    cout<<"enter middle name:";
     getline(cin ,passanger->middleName);

     cout<<"enter last name:";
    getline(cin ,passanger->lastName);
    
    getEmailAddress(passanger);
    
    getPhoneNumber(passanger);

    get_departure_date(passanger);

    

}