#include <iostream>
using namespace std;
class ad{
    private:
    int a,b,c;
    public:
    // constructer should be in call name
    ad (int i,int j){
        cout<<"calling constructor";
        a=i;
        b=j;
    }
    //copy constructor
    ad (const ad &ab){
        cout<<"calling copy constructor";
        a=ab.a;
        b=ab.b;
    }
    void add(){
        cout<<"\na+b="<<a+b<<"\n";
    }
};
int main()
{
    ad ab(6,7); 
    ab.add();
    ad aa(ab);
    aa.add();
    return 0;
}
