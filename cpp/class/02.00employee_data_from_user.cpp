#include <iostream>
using namespace std;
class Employe{
    //class
    //data type
    int id,age;
    string name,dep,pos,rep;
    //class type
    public:
    //getting function
    void get(int i,string w,int r,string e,string p,string t){
        id=i;
        name=w;
        age=r;
        dep=e;
        pos=p;
        rep=t;
    }
    //printing function
    void prnt()
    {
        cout<<"Id no:"<<id<<"\nName :"<<name<<"\nAge :"<<age<<"\nDepartment :"<<dep<<"\nPosition :"<<pos<<"\nReport to :"<<rep<<"\n"<<endl; 
    }
};
int main()
{
    // object array 
    Employe e[2];
    string n,dep,pos,rep;
    int id,a;
      int i;
    //integer to itrate
    for(i=0;i<2;i++)
 {
     // Iam  geting data from user
     cout<<"Id no :";
     cin>>id;
     cout<<endl;
     cout<<"\nEnter the name :";
     cin>>n;
       cout<<endl;
     cout<<"\nAge :";
     cin>>a;
     cout<<endl;
     cout<<"\nDepartment name :";
     cin>>dep;
     cout<<endl;
     cout<<"\nPosition :";
     cin>>pos;
     cout<<endl;
     cout<<"\nReporting to :";
     cin>>rep;
     cout<<endl;
 e[i].get(id,n,a,dep,pos,rep);
 
 }
 for(i=0;i<2;i++)
 {
     //calling printing function
 e[i].prnt();
 }  

    return 0;
}