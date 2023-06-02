#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void take_in_detail(passanger_detail *detail)
{
    cout<<"please enter your name"<<endl;
    getline(cin ,detail->firstName);
    
    cout<<"please enter your last name"<<endl;
    getline(cin ,detail->lastName);
    
    cout<<"please enter your address"<<endl;
    cin>>detail->emailAddress;
    
    cout<<"please enter your phone number"<<endl;
    cin>>detail->phoneNumber;

}