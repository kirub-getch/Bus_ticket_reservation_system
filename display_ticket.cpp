#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void display_detail(passanger_detail *p)
{
cout<<"here is your ticket\n";
   cout<<"\n Name: "<<p->firstName + " " + p->lastName <<"\n";
   cout<<"phone_number: "<< p->phoneNumber <<"\n";
   cout<<"emailAddress: "<< p->emailAddress <<"\n";

   cout << "destinations from " << p->city << " To Addis Abeba\n";
   
}