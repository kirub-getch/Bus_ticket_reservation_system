#include<iostream>
#include<cstring>

using namespace std ;

struct ticketService {
    char firstName[25];
    char lastName[25];
    char startingPlace[25];
    char destinationPlace[25];
    char IdNumber[20];
    char signature[10];
};



int main() {
  
    ticketService persons[10];//structure variable declaration

    cout<<"\tWelcome To Our Ticket Service\n";

    for(int i=0; i<1; i++) {
        cout << "passanger detail of passanger:"<< i + 1<<"\n";
        cout<<"Enter Your First Name\n";
        cin>>persons[i].firstName;
        cout<<"Enter Your Last Name\n";
        cin>>persons[i].lastName;
        cout<<"Enter The Starting Place\n";
        cin>>persons[i].startingPlace;
        cout<<"Enter The Destination Place\n";
        cin>>persons[i].destinationPlace;
        cout<<"Enter Your Id number\n";
        cin>>persons[i].IdNumber;
        cout<<"Enter Owner Signature\n";
        cin>>persons[i].signature;
    }

    for(int i=0; i <1; i++) {
        cout<<"\tDear Customer Here is Your Ticket\n";
        cout<<"Your Full Name......\t\t"<<strcat(persons[i].firstName , persons[i].lastName);
        cout<<"\nYour Starting Place...........\t"<<persons[i].startingPlace;
        cout<<"\nYour Destination Place.......\t"<<persons[i].destinationPlace;
        cout<<"\nYour Id Number....\t"<<persons[i].IdNumber;
        cout<<"\nOur Signature.......\t\t"<<persons[i].signature;
    }
    return 0;
}
