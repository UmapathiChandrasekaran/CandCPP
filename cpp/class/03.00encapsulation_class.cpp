#include <iostream>
using namespace std;

class add{
    //default acess specifier is private:
    int a,b;
    //from here changing privat to public 
    public:
    // to acess the private variables you need to assign getter setter
    void setter(int aa,int bb){
        //setting value to variables in class
        a=aa;
        b=bb;
    }
    void getter(){
        //printing variables
        cout<<"a="<<a;
        cout<<"b="<<b;
    }
    
    void addd(){
        //fuction
        cout<<"\n"<<a+b;
    }
};

int main()
{
    // object
  add a;
  //function calling
  a.setter(2,6);
  a.getter();
  a.addd();
    return 0;
}
