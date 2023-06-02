#include <iostream>
#include <string>
#include "ticket.h"

using namespace std;

void display_detail(passanger_detail *p)
{
   cout<<"Name: "<<p->firstName + " " + p->lastName <<"\n";
   cout<<"phone_number: "<< p->phoneNumber <<"\n";
   cout<<"emailAddress: "<< p->emailAddress <<"\n";

   cout << "destinations from " << p->city << "Addis Abeba\n";
   
}