#include <iostream>
using namespace std;
class t_booking{
    public:
    string alloted="",birth="",temp;
    static int li,mi,ui,raci,wi,l[3],m[3],u[3],rac[3],w[3];
    // t_booking(string b){
    //     this->birth=b;
    // }

void book(string b){
    this->birth=b;
    start:
    if(birth=="u"){
     if (ui<3){
         switch(ui){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="u"+temp;
            ui++;
            cout<<"Alloted ="<<alloted<<endl;
        }
        else{
            cout<<"Seats are filled in upper brith."<<endl;
            if(mi<3){
            birth="m";
            }
            else if(li<3){
                birth="l";
            }
        }
    }
    if(birth=="m"){
     if (mi<3){
         switch(mi){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="m"+temp;
            mi++;
            cout<<"Alloted ="<<alloted<<endl;
        }
        else{
            cout<<"Seats are filled in middle brith."<<endl;
            if(ui<3){
            birth="u";
            goto start;
            }
            else if(li<3){
                birth="l";
            }
        }
    }
    if(birth=="l"){
     if (li<3){
         switch(li){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="l"+temp;
            li++;
            cout<<"Alloted ="<<alloted<<endl;
        }
        else{
            cout<<"Seats are filled in middle brith."<<endl;
            if(ui<3){
            birth="u";
            }
            else if(mi<3){
                birth="m";
            }
            goto start;
        }
    }
    if(ui>=3&&mi>=3&&li>=3){
        if(raci<3){
            switch(raci){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="raci"+temp;
            raci++;
            cout<<"Alloted ="<<alloted<<endl;
        }
        else if(wi<3){
            switch(wi){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="wi"+temp;
            wi++;
            cout<<"Alloted ="<<alloted<<endl;
        }
        else{
            cout<<"Tickets are not available."<<endl;
        }
    }
}
};
int t_booking::li=0,t_booking::mi=0,t_booking::ui=0,t_booking::raci=0,t_booking::wi=0;
int t_booking::l[3]={0,0,0};
int t_booking::m[3]={0,0,0};
int t_booking::u[3]={0,0,0};
int t_booking::rac[3]={0,0,0};
int t_booking::w[3]={0,0,0};
int main()
{
    t_booking j;
    j.book("l");
    cout<<j.li;

    return 0;
}
