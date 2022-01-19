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
    Employe e[10];
      int i;
    //integer to itrate
    for(i=0;i<10;i++)
 {
     // Iam using switch function to assign or else you can get from user
     //assigning datas to coressponding element
switch(i){
 case 0: e[i].get(1,"sriram",45,"department","ceo","");
 break;
 case 1: e[i].get(2,"mukund",42,"hr","hrmanager","sriram");
 break;
 case 2: e[i].get(3,"sebastian",38,"financemanager","financemanager","sriram");
  break;
 case 3:  e[i].get(4,"aashritha",32,"productmanager","devmanager","sriram");
  break;
 case 4: e[i].get(5,"mohammadraf",35,"hr","hrlead","mukund");
  break;
 case 5: e[i].get(6,"anjalikumar",29,"hr","hrassociate","mohammadrafi");
  break;
 case 6: e[i].get(7,"joshep",40,"finance","financeassociate","sebastian");
  break;
 case 7: e[i].get(8,"ramachandran",27,"productdevelopment","techlead","aashritha");
  break;
 case 8: e[i].get(9,"abhinayashankar",23,"productdevelopment","systemdeveloper","ramachandran");
  break;
 case 9: e[i].get(10,"imrankhan",28,"producttesting","qalead","ramachandran");
  break;
default: 
 break;
}
 }
 for(i=0;i<5;i++)
 {
     //calling printing function
 e[i].prnt();
 }  

    return 0;
}