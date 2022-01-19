#include <iostream>
using namespace std;
class ad{
    public:
    int a,b,c;
    // constructer should be in call name
    explicit ad (int i=0,int j=0){
        cout<<"calling constructor";
        a=i;
        b=j;
    }
};
void add(ad &ab){
    cout<<"\na+b="<<ab.a+ab.b<<"\n";
}
int main()
{
    ad ab(6,7); 
    add(ab);
    return 0;
}