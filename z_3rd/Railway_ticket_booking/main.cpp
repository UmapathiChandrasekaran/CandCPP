#include <iostream>
using namespace std;
class t_booking{
    public:
    string n,alloted=" ",birth="",temp;
    static int idd,li,mi,ui,raci,wi,l[3],m[3],u[3],rac[3],w[3];
    int age,i,id;

void book(string n,int a,string b){
    this->n=n;
    this->age=a;
    this->birth=b;
    this->id=idd;
    idd++;
    start:
    if(birth=="u"){
     if (ui<3){
         for(i=0;i<3;i++){
             if(u[i]==0){
            alloted="u";
            u[i]=id;
            ui++;
            break;
        }
        }
        for(i=0;i<3;i++){
            if (u[i]==id){
            switch(i){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            }
     }
        else{
            cout<<"Seats are filled in upper brith."<<endl;
            if(mi<3){
            birth="m";
            }
            else if(li<=3){
                birth="l";
            }
        }
    }
    if(birth=="m"){
     if (mi<3){
         for(i=0;i<3;i++){
             if(m[i]==0){
         switch(i){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="m";
            m[i]=id;
            mi++;
            break;
        }
        }
     }
        else{
            cout<<"Seats are filled in middle brith."<<endl;
            if(ui<3){
            birth="u";
            goto start;
            }
            else if(li<=3){
                birth="l";
            }
        }
    }
    if(birth=="l"){
     if (li<3){
         for(i=0;i<3;i++){
             if(l[i]==0){
         switch(i){
             case 0:temp='1';break;
             case 1:temp='2';break;
             case 2:temp='3';break;
         }
            alloted="l";
            l[i]=id;
            li++;
            break;
        }
        }
     }
        else{
            cout<<"Seats are filled in lower brith."<<endl;
            if(mi<3){
            birth="m";
            goto start;
            }
            else if(ui<3){
                birth="u";
            goto start;
            }
        if(ui>2&&mi>2&&li>2){
            if(raci<3){
                for(i=0;i<3;i++){
                    if(rac[i]==0){
                    switch(raci){
                    case 0:temp='1';break;
                    case 1:temp='2';break;
                    case 2:temp='3';break;
                }
                    alloted="raci";
                    rac[i]=id;
                    raci++;
                    break;
                        }
                    }
                }
                else if(wi<3){
                    for(i=0;i<3;i++){
                        if(w[i]==0){
                    switch(wi){
                    case 0:temp='1';break;
                    case 1:temp='2';break;
                    case 2:temp='3';break;
                }
                    alloted="wi";
                    w[i]=id;
                    wi++;
                    break;
                        }
                    }
                    
                }
                else{
                    alloted="";
                }
            }
        }
    }
}
void dis(){
    cout<<"Id :"<<id<<endl;
    cout<<"Name :"<<n<<endl;
    cout<<"Age :"<<age<<endl;
    if(alloted!=" "){
        cout<<"Alloted ="<<alloted+temp<<endl;
    }
    else{
        cout<<"Tickets are fulled"<<endl;
        alloted='\0';
    }
    cout<<"======================================"<<endl;
}
void up(){
    int i;
    cout<<"u=";
    for(i=0;i<3;i++){
        cout<<u[i];
    }
    cout<<"rac=";
    for(i=0;i<3;i++){
        cout<<rac[i];
    }
}
};
int t_booking::li=0,
int t_booking::mi=0,t_booking::ui=0,t_booking::raci=0,t_booking::wi=0;
int t_booking::l[3]={0,0,0};
int t_booking::m[3]={0,0,0};
int t_booking::u[3]={0,0,0};
int t_booking::rac[3]={0,0,0};
int t_booking::w[3]={0,0,0};
int t_booking::idd=1;
int main()
{
    int i,l,k,m,age,s,ck=1;
    string name,b;
    t_booking j[100];
    j[i].book("hai",34,"u");
    i++;
    j[i].book("al",45,"u");
    i++;
    j[i].book("haiyo",40,"l");
    i++;
    j[i].book("iii",14,"m");
    i++;
    j[i].book("aaa",34,"u");
    i++;
    j[i].book("hhh",84,"u");
    i++;
    j[i].book("hello",40,"m");
    i++;
    j[i].book("hell",39,"m");
    i++;
    j[i].book("he",24,"m");
    i++;
    j[i].book("hel",04,"l");
    i++;
    j[i].book("ai",84,"u");
    i++;
    j[i].book("bai",94,"u");
    i++;
    j[i].book("thai",34,"u");
    i++;
    j[i].book("hhai",34,"u");
    i++;
    
    
    while(ck==1){
        cout<<"1.Book ticket."<<endl;
        cout<<"2.Cancel ticket."<<endl;
        cout<<"3.View booked ticket."<<endl;
        cout<<"4.View available ticket."<<endl;
        cout<<"5.Exit."<<endl;
        cin>>s;
    switch(s){
        case 1:cout<<"\nName : ";
               cin>>name;
               cout<<"\nAge : ";
               cin>>age;
               cout<<"\nBirth : ";
               cin>>b;
               j[i].book(name,age,b);
               j[i].dis();
               if(i>=15){
               }
               else{
                    cout<<"Ticket booked sucessfuly.\n\n"<<endl;
                    i++;
               }
               break;
        case 2:cout<<"Cancel ticket";
        cout<<"Enter the id : ";
        cin>>s;
        for(k=0;k<i;k++){
            if(j[k].id==s){
                j[k].dis();
                // cout<<"\n"<<;
                if(j[k].alloted=="u"){
                for(l=0;l<3;l++){
                if(j[k].u[l]==s){
                    if (j[k].rac[0]!=0){
                                    j[k].u[l]=j[k].rac[0];
                                    j[k].rac[0]=0;
                    }
                    else{
                        j[k].u[l]=0;
                    }
        //                 j[k].j[k].alloted[0][l]=j[k].rac[0];
        //                 if(j[k].w[0]!=0){
        //                     for(m=0;m<2;m++){
        //                             j[k].rac[m]=j[k].rac[m+1];
        //                     }
        //                    j[k].rac[m]=j[k].w[0];
        //                    for(m=0;m<2;m++){
        //                             j[k].w[m]=j[k].w[m+1];
        //                     }
        //                    j[k].w[m]=0;
        //                 }
        //                 else{
        //                     for(m=0;m<2;m++){
        //                             j[k].rac[m]=j[k].rac[m+1];
        //                     }
        //                    j[k].rac[m]=0;
        //                 }
        //             }
        //             else{
        //                 j[k].alloted[0][l]=0;
        //             }

                }
                }
                } 
            }
        }
        cout<<"Ticket Canceled sucessfuly.\n\n"<<endl;
        break;
        case 3:cout<<"Veiwing booked tickets\n\n";
        cout<<"Number of tickets booked="<<i<<endl;
        for(k=0;k<i;k++){
            cout<<"i="<<k;
            j[k].dis();            
        }
        break;
        case 4:cout<<"available tickets";break;
        case 5:cout<<"exited";

        ck=0;
        break;
        default:cout<<"enter the valid number";        
    }
        
    }
    j[i].up();
    return 0;
}
