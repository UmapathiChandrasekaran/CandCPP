#include <iostream>
using namespace std;

class em{
    //declaring count
    int id;
    double sal;
    string n;
    public:
    em(int a,string b,double sal=0){
        //incresing count in constructer
        this->id=a;
        this->n=b;
        this->sal=sal;
         }
    //seting name
    void setn(string n){
        this->n=n;
            }
    //geting name
    string getn(){
        return(n);
    }
    //setting salary
    void setsa(double s){
        this->sal=s;
    }
    ///getting salary
    double getsa(){
        return(sal);
    }
    //printing
    void print(){
        cout<<"Id no :"<<id<<endl;
        cout<<"Name :"<<n<<endl;
        cout<<"Salary :"<<sal<<endl;
    } 
};
//dirived class
class cem : public em{
    int wh;
    public:
    cem(int i,string n,int h):em(i,n){//revoking base class constructer
        wh=h;
        setsa();
    }
    //setting sallary
    void setsa(){
        em::setsa(100*wh);
    }
    // re defining salary
    void print(){
        em::print();
        cout<<"wh="<<wh<<endl;
    }

};

int main()
{

em e1(1,"v",2000);
e1.print();
e1.setsa(25000);
e1.print();

cem c(2,"u",400);
c.print();

}
