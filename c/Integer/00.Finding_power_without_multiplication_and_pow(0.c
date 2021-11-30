#include <stdio.h>

int power(int num,int p){
//checking power is greater than zero
    if(p==0){
        return(0);
    }
// i and for loop and intalizing plus to number
    int i,j,plus=num,result=num;
    //loop for power
    for(i=1;i<p;i++){
        // loop for number
        for(j=1;j<num;j++){
    // will add number to it times
    //eg: 3 power 2=3+3+3=9, 5 power 2=5+5+5+5+5=25
            result=result+plus;
        }
    //if poer is greater than 2 then plus stores answer
    //and runs loop again
    //eg 3 power 3,last loop gives 9 as result
    //again fist loop runs with plus=9
    //3 power 3=9+9+9=27
        plus=result;
    }
    return result;
}
int main() {
    //num is number, p is power
    int num,p;
    printf("enter the number");
    scanf("%d",&num);
    printf("enter the power");
    scanf("%d",&p);
    printf("%d",power(num,p));
    
    
    return 0;
}