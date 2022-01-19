#include <iostream>
using namespace std;

class sh{
        public:
    int a,b;

    sh(int a,int b){
        this->a=a;
        this->b=b;
         }
    virtual void area()=0;//pure virtual class or abstract class
//definition of virtual class must be given in dirived class
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
sh *sa;//pointer as object of sh
tri t(20,2);
t.area();
//seting pointer towards t
sa=&t;
//calling area with pointer
sa->area();
sq s(25,25);
s.area();
//seting pointer towards s
sa=&s;
//calling area with pointer
sa->area();


}
