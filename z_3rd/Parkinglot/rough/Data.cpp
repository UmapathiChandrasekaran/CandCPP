#include<iostream.h>
using namespace std;
class data{
public:

 string street,city,state,country;
 int zip_code
void V_type(){
    cout<<"\n\nEnter the number...\n1.CAR.\n2.TRUCK.\n3.ELECTRIC.\n4.VAN.\n5.MOTORBIKE\n";
}

void P_slot_type(){
    cout<<"\n\nEnter the number...\n1.HANDICAPPED.\n2.COMPACT.\n3.LARGE.\n4.MOTORBIKE.\n5.ELECTRIC\n";
}

void A_Status(){
  cout<<"\n\nEnter the number...\n1.ACTIVE.\n2.BLOCKED.\n3.BANNED.\n4.COMPROMISED.\n5.ARCHIVED.\n6.UNKNOWN\n";
}

void PT_Status(){
  cout<<"\n\nEnter the number...\n1.ACTIVE.\n2.PAID.\n3.LOST";
}

void Address(){
    cout<<"\nEnter the Street :\n";
    cin>>street;
    cout<<"\nEnter the City :\n";
    cin>>city;
    cout<<"\nEnter the State :\n";
    cin>>state;
    cout<<"\nEnter the Zip code :\n";
    cin>>zip_code;
    cout<<"\nEnter the Country :\n";
    cin>>country;
    return (street,city,state,country);
}



};