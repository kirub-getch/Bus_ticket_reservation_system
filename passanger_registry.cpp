#include<iostream>
#include<string>
#include "ticket.h"
#include <cstring>

using namespace std ;





int main() {
  
cout<<"\tWelcome To Our Ticket Service\n";
  passanger_detail passanger_1;
    
    passanger_1.firstName = "kirub";
    passanger_1.lastName = "getch";
    passanger_1.phoneNumber = "0930630075";
    passanger_1.emailAdress ="kirub@gmail.com";

  
    cout << "\tDear Customer Here is Your Ticket\n";
    cout << "Your Full Name......\t\t" << passanger_1.firstName + passanger_1.lastName);
    cout << "\nYour phone number...........\t" <<passanger_1.phoneNumber;
    cout << "\nYour email adress.......\t" <<passanger_1.emailAdress;
    
    

    return 0;
}
