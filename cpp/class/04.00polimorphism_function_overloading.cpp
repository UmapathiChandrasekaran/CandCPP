#include <iostream>
using namespace std;
class ad{
    public:
    int a,b,c;
    void add(int s,int r){
        a=s;
        b=r;
        cout<<"a+b="<<s+r<<"\n";
    }
    void add(int s,int r, int t){
        a=s;
        b=r;
        c=t;
        cout<<"a+b+c="<<a+b+c;
    }
};
int main()
{
    ad a;
    a.add(5,6);
    a.add(2,4,5);
    return 0;
}
