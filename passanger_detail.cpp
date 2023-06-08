#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void take_in_detail(passanger_detail *detail)
{
    cout<<"please enter your firstname"<<endl;
    getline(cin ,detail->firstName);
    
    cout<<"please enter your last name"<<endl;
    getline(cin ,detail->lastName);
    
    cout<<"please enter your address"<<endl;
    detail->emailAddress = getEmailAddress();
    
    cout<<"please enter your phone number"<<endl;
    detail->phoneNumber = getPhoneNumber();

}