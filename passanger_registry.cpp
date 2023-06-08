#include<iostream>
#include<string>
#include "ticket.h"


using namespace std ;


int main()
{
 char answer; 
static passanger_detail passanger[10];

cout<<"\tWelcome To Our Ticket Service\n Please note that currently only tickets from regoinal cities to Addis Abeba  are available \n";

passanger_detail *ptr;

ptr = &passanger[0];

travel_destinations(ptr);

cout<<"would you like to procced to passanger registration? (Y/N)\n";
cin>>answer;
if(answer == 'n' || answer == 'N')
return 1;

take_in_detail(ptr);

display_detail(ptr);

return 0;
}
