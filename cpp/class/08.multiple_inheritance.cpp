#include <iostream>
using namespace std;

class sh{
        public:
    int a,b;

    sh(int a,int b){
        this->a=a;
        this->b=b;
         }
    void area(int a,int b){
        cout<<"area is";
            }

};
//dirived class1
class tri : public sh{
    public:
    tri(int a,int b):sh(a,b){
    }

    void area(){
        cout<<"triangel area="<<a*b/2<<endl;
    }
    };
//dirived class2
class sq : public sh{
       public:
    sq(int a,int b):sh(a,b){
    }
    void area(){
        cout<<"square area="<<a*b<<endl;
    }
    };

int main()
{

tri t(20,2);
t.area();
sq s(25,25);
s.area();


}
