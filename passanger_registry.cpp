#include<iostream>
#include<string>
#include "ticket.h"


using namespace std ;


int main()
{
  
static passanger_detail passanger[10];

cout<<"\tWelcome To Our Ticket Service\n Please note that currently only tickets from regoinal cities to Addis Abeba  are available \n";

passanger_detail *ptr;

ptr = &passanger[0];

travel_destinations(ptr);

take_in_detail(ptr);

display_detail(ptr);

return 0;
}
