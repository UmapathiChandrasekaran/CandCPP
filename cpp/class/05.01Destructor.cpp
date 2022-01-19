#include <iostream>
using namespace std;
class ad{
    private:
    int a,b,c;
    public:
    // constructer should be in call name
    ad (int i,int j){
        cout<<"calling constructor1";
        a=i;
        b=j;
    }
    // constructor can be over loaded
    ad (int i,int j,int k){
        cout<<"calling constructor2";
        a=i;
        b=j;
        c=k;
    }
    //destructor
    ~ad(){
        cout<<"\ncalling destructor";
    }
    void add(){
        cout<<"\na+b="<<a+b<<"\n";
    }
    void addd(){
        cout<<"\na+b+c="<<a+b+c<<"\n";
    }
};
int main()
{
    ad a(6,7);
    a.add();
    ad aa(2,7,1);
    aa.addd();
    return 0;
}
