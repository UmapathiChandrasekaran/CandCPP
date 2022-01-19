#include <iostream>
using namespace std;

class add{
    //declaring count
    static int count;
    int a,b;
    public:
    add(int a,int b){
        //incresing count in constructer
        this->a=a;
        this->b=b;
        count++;
    }
    void Add(){
        cout<<"a+b="<<a+b<<"\n";
    }
    static int c(){
        
        return(count);
    }
};
//intaializing static number
int add::count=0;
int main()
{

add a(5,6);
a.Add();
cout<<"c="<<add::c()<<"\n";

add aa(6,6);
aa.Add();
cout<<"c="<<add::c()<<"\n";



add aaa(7,6);
aaa.Add();
cout<<"c="<<add::c()<<"\n";
}
