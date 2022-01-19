#include <iostream>
#include <string.h>
using namespace std;
class Employe{
    //class
    //class type
     public: 
    //data type
    int id,age;
    string name,dep,pos,rep;
  
    
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
      int i,j,c;
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
 case 4: e[i].get(5,"mohammadrafi",35,"hr","hrlead","mukund");
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
//  string ds[10] = {"ceo", "hrmanager", "financemanager", "devmanager", "hrlead", "hrassociate",
//                                         "financeassociate", "techlead", "systemdeveloper", "qalead"};

     
//     for(i=0;i<10;i++){
//         c=0;
//         cout<<ds[i]<<"\n";
//         for(j=0;j<10;j++){
//          if(ds[i]==e[j].pos){
//         e[i].prnt();
//             c+=1;
//  }  
//         }
//         cout<<"No of Employees in "<<ds[i]<<" is : "<<c<<"\n\n";
 
// }


// string deprt[6] = {"management", "finance", "hr", "productmanager", "productdevelopment", "producttesting"};
     
//     for(i=0;i<6;i++){
//         c=0;
//         cout<<deprt[i]<<"\n";
//         for(j=0;j<10;j++){
//          if(deprt[i]==e[j].dep){
//         e[j].prnt();
//             c+=1;
//  }  
//         }
//         cout<<"No of Employees in "<<deprt[i]<<" is : "<<c<<"\n\n";
 
// }
   
string man[6]={"sriram", "mukund", "mohammadrafi", "sebastian", "aashritha", "ramachandran"};
     
    for(i=0;i<6;i++){
        c=0;
        cout<<man[i]<<"\n";
        for(j=0;j<10;j++){
         if(man[i]==e[j].name){
        e[j].prnt();
            c+=1;
 }  
        }
        cout<<"No of Employees in "<<man[i]<<" is : "<<c<<"\n\n";
 
}
 return 0;
}

