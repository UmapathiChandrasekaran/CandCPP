#include <iostream>
using namespace std;
class name{
    //class
    //data type
    string name;
    //class type
    public:
    //getting function
    void get(){
        cout<<"enter the name";
        getline(cin,name);
    }
    //printing function
    void prnt()
    {
        cout<<name;
    }
};
int main()
{
    // object array 
    name n[5];
    //integer to itrate
    int i;
 for(i=0;i<5;i++)
 {
     //printing i 
     cout<<i<<"\n";
     //calling vgetting function
 n[i].get();
 }
 for(i=0;i<5;i++)
 {
     //calling printing function
 n[i].prnt();
 }  

    return 0;
}