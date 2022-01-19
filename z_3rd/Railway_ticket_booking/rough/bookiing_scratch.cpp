/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string alloted="",a,temp;
    int li=3,lci=0,mi=3,mci=0,ui=3,uci=0,raci=3,racci=0,wi=3;
    int l[3]={0,0,0}, lc[3]={0,0,0}, m[3]={0,0,0}, mc[3]={0,0,0}, u[3]={0,0,0}, uc[3]={0,0,0};
    int rac[3]={0,0,},racc[3]={0,0,0},w[3]={0,0,0};
    cout<<"enter the option :";
    cin>>a;
    start:
    
    if(a=="u"){
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
            a="m";
            }
            else if(li<3){
                a="l";
            }
        }
    }
    if(a=="m"){
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
            a="u";
            goto start;
            }
            else if(li<3){
                a="l";
            }
        }
    }
    if(a=="l"){
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
            a="u";
            }
            else if(mi<3){
                a="m";
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
    
    
    // cout<<"Alloted :"<<alloted<<endl;
    return 0;
}
