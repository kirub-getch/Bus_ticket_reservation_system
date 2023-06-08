#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void take_in_detail(passanger_detail *detail)
{
    cout<<"please enter your firstname :";
    getline(cin ,detail->firstName);
    
    cout<<"\nplease enter your last name:";
    getline(cin ,detail->lastName);
    
    detail->emailAddress = getEmailAddress();
    
    detail->phoneNumber = getPhoneNumber();

}