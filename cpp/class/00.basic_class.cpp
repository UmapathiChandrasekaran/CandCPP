#include <iostream>

using namespace std;

// class (should be declared before name) then class name
class a
{
    //class type pulic or private
    public://colon must 
    
    //data type and their variables
    string name;
    int date;
    
    //inbuild functions
    //inbuild function definition inside class
    
    void pr(){
        //function operation
        cout<<"name :"<<name;
    }
    
    // inbuild function definition outside the class
    void prr();
    
};//class name will end by  ;

//creating function outside class
void a :: prr()
{
    // function definition
    cout<<"\ndate :"<<date;
}


int main()
{
    //creating object to class a
    // class name (space) object variable;
    a o;
    //calling class with obeject
    
    //assigning values to class data types
    o.name = "Hello Peter!";
    o.date = 16.122020;
    
    // calling functio
    o.pr();
    o.prr();

    return 0;
}
