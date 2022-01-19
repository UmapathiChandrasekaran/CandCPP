//  Given two numbers a and b both < 200 we have to find the square numbers which lie between a and b(inclusive) 
// eg) i/p a = 20;b = 100;      
// o/p 25,36,49,64,81,100 


#include <stdio.h>
//function for squareroot
int squ(int a){
    int b;
    double temp=0,srt;
    // store the half of the given number e.g from 256 => 128
    srt=a/2;
    // Iterate until sqrt is different of temp, that is updated on the loop
    while(temp!=srt){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp=srt;
        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        srt=(a/temp+temp)/2;
    }
    b=srt;
    // if b x b is a printng a
    if(b*b==a){
    printf("%d ",a);
    }
}


int main() {
    int s,e,i;
    printf("start value: ");
    scanf("%d",&s);
     printf("end value: ");
    scanf("%d",&e);
    for(i=s;i<=e;i++){
        squ(i);
    }
    return 0;
} 