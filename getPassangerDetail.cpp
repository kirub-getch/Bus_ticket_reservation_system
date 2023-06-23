
#include "ticket.h"

using namespace std;

void getPassengerDetail(passengerDetail *passenger)
{
    cout<<"\n**PASSANGER DETAIL** \n"
    <<"---------------------------"<<endl;

   
   /// cin.ignore();
    
    cout<<"Enter first name:";
    getline(cin ,passenger->firstName);

    cout<<"Enter middle name:";
     getline(cin ,passenger->middleName);

     cout<<"Enter last name:";
    getline(cin ,passenger->lastName);

    cout<<"\n**CONTACTS**\n"
    <<"---------------------------"<<endl;

    passenger->emailAddress = getEmailAddress();
    
    passenger->phoneNumber = getPhoneNumber( );

    

    

}