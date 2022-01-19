#include <iostream>
using namespace std;
class psngr{
public:
static int id;
int age,nmb;
string n,berth,alloted;
psngr(string n,int a,string b){
    this->n=n;
    this->age=a;
    this->berth=b;
    id++;
    alloted="";
    this->nmb-1;
}
void get(){
    cout<<"Id :"<<id<<endl;
    cout<<"Name :"<<n<<endl;
    cout<<"Age :"<<age<<endl;
    cout<<"Berth :"<<berth<<endl;

}
};
int psngr::id=0;
int main()
{
    psngr p("hai",23,"l");
    p.get();
    psngr p1("h",34,"m");
    p1.get();
    return 0;
}
