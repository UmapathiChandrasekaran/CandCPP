#include <iostream>
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
      int i,s;
      string sname;
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
  int n;
start:
    cout << "\nEnter the option";
    cout << "\n1. Show all records";
    cout << "\n2. Search records";
    cout << "\n3. Reporting manager";
    cout << "\n4. Reporting Tree";
    cout << "\n5. Summary";
    cout << "\n6. Exit\n";
    cin >> n;
    switch(n)
    {
        case 1:
        cout << "record showen";
        goto start;
        break;
         case 2:
        cout << "record searched";
        goto start;
        break;
        case 3:
        cout << "Reported manager";
        goto start;
        break;
        case 4:
        cout << "Reported Tree";
        goto R_tree;
        break;
        case 5:
        cout << "summary shown";
        goto start;
        break;
        case 6:
        cout << "Exited sucessfully";
        break;
        default:cout<<"enter a valid number";
        break;
    }
    S_end:
        cout<<"1.Search again";
        cout<<"2.Exit searching";
        cout<<"3.Exit";
        cin>>s;
        switch(s){
            case 1: cout<<"1.Searching again";
             goto R_tree;
            break;
            case 2: cout<<"2.Exited searching";
            goto start;
            break;
            case 3: cout<<"3.Exiting...";
            goto Exit;
            default: break;
        }
 R_tree:
        cout<<"\nEnter the Reporting person:";
        cin>>sname;
        re:
        for(i=0;i<10;i++){
            if (sname==e[i].name)
            {
            if(e[i].rep !=""){
            cout<<sname<<"-->"<<e[i].rep;
            sname=e[i].rep;
            }
            else{
                goto S_end;
            }
            break;
        }
        }
        goto re;
        
        
         Exit:
    cout<<"\nExited sucessfully\n";
    return 0;
}
