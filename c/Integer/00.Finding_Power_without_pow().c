#include <stdio.h>
//power function defining
// num is number, p is power
int power(int num,int p){
    //intializing i=0 for loop and result=1
    int i=0,result=1;
    //loop will run power times
    for (i=0;i<p;i++){
        result=result*num;
    }return(result);
}

int main() {
    // p is power and num is number
    int p,num;
    //geting number and power from user
    printf("enter the number");
    scanf("%d",&num);
    printf("enter the power");
    scanf("%d",&p);
    printf("%d",power(num,p));
    
    return 0;
}