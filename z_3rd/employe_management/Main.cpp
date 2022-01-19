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
//i and j foor looping, c for counting, n and s for selecting 
int i,j,c,n,s;
//sname for searching
string sname;
//character arrays
string ds[10] = {"ceo", "hrmanager", "financemanager", "devmanager", "hrlead", "hrassociate","financeassociate", "techlead", "systemdeveloper", "qalead"};
string man[6]={"sriram", "mukund", "mohammadrafi", "sebastian", "aashritha", "ramachandran"};
string deprt[6] = {"management", "finance", "hr", "productmanager", "productdevelopment", "producttesting"};
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


//starting point of application
    Start:
    cout<<"\\nnEnter the option\n";
    cout << "\n1. Show all records";
    cout << "\n2. Search records";
    cout << "\n3. Reporting manager";
    cout << "\n4. Reporting Tree";
    cout << "\n5. Summary";
    cout << "\n6. Exit\n";
    cin>>n;
    switch(n)
    {
        case 1:
        cout << "\n\n\nShowing all records....\n\n";
        goto Show;
        break;
         case 2:
        cout << "\n\nSearching records....\n\n";
        goto Search;
        break;
        case 3:
        cout << "\n\nManager Report\n\n";
        goto M_report;
        break;
        case 4:
        cout << "\n\nReported Tree\n\n";
        goto R_tree;
        break;
        case 5:
        cout << "\n\nShowing Summary...\n\n";
        goto Summary;
        break;
        case 6:
        cout << "\nExiting.....";
        goto Exit;
        break;
        default:cout<<"enter a valid number";
        break;
     }
    
    
    
Show:
     for(i=0;i<10;i++)
    {
     //calling printing function
    e[i].prnt();
    }  
    cout<<"\nAll datas are showed.\nBack to main menu.\n";
    goto Start;

S_end:
        cout<<"\n1.Search again";
        cout<<"\n2.Exit searching";
        cout<<"\n3.Exit\n";
        cin>>s;
        switch(s){
            case 1: cout<<"\nSearching again\n";
             goto Search;
            break;
            case 2: cout<<"\nExited searching\n";
            goto Start;
            break;
            case 3: cout<<"\nExiting...";
            goto Exit;
            default: break;
        }



Search:
    cout << "\nSearching Methods....\n";
    cout << "\n1. Name.";
    cout << "\n2. Age.";
    cout << "\n3. Department.";
    cout << "\n4. Position.";
    cout << "\n5. Reporing person.";
    cout << "\n6. Exit Searching.\n";
    cin >> s;
    switch(s)
    {
        
        
        case 1:
        cout << "\nSearching with Name....\n";
        cout<<"\nEnter the name:";
        cin>>sname;
        for(i=0;i<10;i++){
            if(sname==e[i].name)
            {
                e[i].prnt();
        }
        }
        goto S_end;
        break;
        
        
        
        
        case 2:
        cout << "\nSearching with Age....\n";
        cout<<"\nEnter the age:";
        cin>>s;
        for(i=0;i<10;i++){
            if(s==e[i].age){
                e[i].prnt();
            }
        }
        goto S_end;
        break;
        
        
        case 3:
        cout << "\nSearching with Department....\n";
        cout<<"\nEnter the Department name:";
        cin>>sname;
        for(i=0;i<10;i++){
            if(sname==e[i].dep)
            {
                e[i].prnt();
        }
        }
        goto S_end;
        break;
        




        case 4:
        cout << "\nSearching with Position....\n";
        cout<<"\nEnter the Position:";
        cin>>sname;
        for(i=0;i<10;i++){
            if(sname==e[i].pos)
            {
                e[i].prnt();
        }
        }
        goto S_end;
        break;


        case 5:
        cout << "\nSearching with Reporting person....\n";
        cout<<"\nEnter the Reporting person:";
        cin>>sname;
        for(i=0;i<10;i++){
            if(sname==e[i].rep)
            {
                e[i].prnt();
        }
        }
        
        goto S_end;
        break;

        case 6:
        cout << "Searching Exited sucessfully.";
        goto Start;
        break;

        default:cout<<"enter a valid number";
        goto Search;
        break;
    }
        


M_report:
        cout<<"\nEnter the Reporting person:";
        cin>>sname;
        cout<<"\nPrinting reports.";
        for(i=0;i<10;i++){
            if(sname==e[i].rep)
            {
                cout<<"\n"<<e[i].name;
        }
        }
        cout<<"\nRepot printed\n\n";
        cout<<"\n1.Search again";
        cout<<"\n2.Exit searching";
        cout<<"\n3.Exit";
        cin>>s;
        switch(s){
            case 1: cout<<"\nSearching again";
             goto M_report;
            break;
            case 2: cout<<"\nExited searching";
            goto Start;
            break;
            case 3: cout<<"\nExiting...";
            goto Exit;
            default: cout<<"enter a valid number";
            goto M_report;
            break;
        }

    R_tree:
        cout<<"\nEnter the Reporting person:";
        cin>>sname;
        re:
        for(i=0;i<10;i++){
            if (sname==e[i].name)
            {
            if(e[i].rep !=""){
            cout<<"\n"<<sname<<"-->"<<e[i].rep;
            sname=e[i].rep;
            }
            else{
            cout<<"\nTree printed\n\n";
            cout<<"\n1.Search again";
            cout<<"\n2.Exit searching";
            cout<<"\n3.Exit";
            cin>>s;
            switch(s){
            case 1: cout<<"\nSearching again";
             goto R_tree;
            break;
            case 2: cout<<"\nExited searching";
            goto Start;
            break;
            case 3: cout<<"\nExiting...";
            goto Exit;
            default: cout<<"enter a valid number";
            goto R_tree;
            break;
        }
            }
            break;
        }
        }
        goto re;
    
Summary:
        
        cout<<"\n\nSummary\n\n";
        cout<<"\n1.Department summary\n";
        cout<<"\n2.Desigation summary\n";
        cout<<"\n3.Manager summary\n";
        cout<<"\n4.Exit";
        cin>>s;
        switch(s){




            case 1: cout<<"\nDepartment summary\n";
            for(i=0;i<6;i++){
            c=0;
            cout<<deprt[i]<<"\n";
            for(j=0;j<10;j++){
             if(deprt[i]==e[j].dep){
            e[j].prnt();
                c+=1;
            }  
            }
            cout<<"No of Employees in "<<deprt[i]<<" is : "<<c<<"\n\n";
            }
            break;




            case 2: cout<<"\nDesigation summary\n";
            for(i=0;i<10;i++){
            c=0;
            cout<<ds[i]<<"\n";
            for(j=0;j<10;j++){
             if(ds[i]==e[j].pos){
            e[i].prnt();
                c+=1;
             }  
            }
            cout<<"No of Employees in "<<ds[i]<<" is : "<<c<<"\n\n";
            }
            break;



            case 3: cout<<"\nManager summary\n";
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
            break;



            case 4: cout<<"\nExiting...";
            goto Start;
            default: cout<<"enter a valid number";
            goto Summary;
            break;
        }
        cout<<"\n1.Search again";
        cout<<"\n2.Exit searching";
        cout<<"\n3.Exit";
        cin>>s;
        switch(s){
            case 1: cout<<"Searching again";
             goto Summary;
            break;
            case 2: cout<<"Exited summary";
            goto Start;
            break;
            case 3: cout<<"Exiting...";
            goto Exit;
            default:cout<<"enter a valid number";
            goto Start;
            break;
        }

    Exit:
    cout<<"\nExited sucessfully\n";
    
    return 0;
}