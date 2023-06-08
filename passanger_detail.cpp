#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void take_in_detail(passanger_detail *detail)
{
    cout<<"please fill in the details of the passanger"<<endl;

   // cout<<"enter firstname:";
    getline(cin ,detail->firstName);
    
    cout<<"enter first name:";
    getline(cin ,detail->firstName);

     cout<<"enter last name:";
    getline(cin ,detail->lastName);
    
    detail->emailAddress = getEmailAddress();
    
    detail->phoneNumber = getPhoneNumber();

}