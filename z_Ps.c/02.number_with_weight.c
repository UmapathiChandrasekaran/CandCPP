//  Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the following conditions    
//  1. 5 if a perfect square    
//  2. 4 if multiple of 4 and divisible by 6    
//  3. 3 if even number 
//  And sort the numbers based on the weight and print it as follows 
//  <10,its_weight>,<36,its weight><89,its weight> 
//  Should display the numbers based on increasing order. 
#include <stdio.h>
//square root function
int srt(int a){
    int b;
    double srt,temp;
    srt=a/2;
    while(srt!=temp){
        temp=srt;
        srt=(a/temp+temp)/2;
    }
    b=srt;
    if(b*b==a){
        return 5;
    }
    else{
        return 0;
    }
}
//multiples of 4 and divisible of 6
int mul4_div6(int a){
    if (a%4==0 && a%6==0){
        return 4;
    }
    else{
        return 0;
    }
}
//wheter numberr is even or not function
int even(int a){
    if (a%2==0){
        return 3;
    }
    else{
        return 0;
    }
    
}

int main() {
    //number of ellements for array
    int a;
    printf("enter the number of elements");
    scanf("%d",&a);
    //array b
    // i and j for loop
    int b[50],i,j;
    //inserting array
    for(i=0;i<a;i++){
        printf("%d :",i);
        scanf("%d",&b[i]);
    }
    int temp;
    //sorting elements lower to higher
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(b[j]>b[i]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    //finding weightage of b elements 
    // coping to c and d
    int c[a],d[a];
    for(i=0;i<a;i++){
         c[i]=srt(b[i])+mul4_div6(b[i])+even(b[i]);
        d[i]=srt(b[i])+mul4_div6(b[i])+even(b[i]);
        printf("%d ",c[i]);
    }
    //sorting weightage array c
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(c[j]<c[i]){
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    //finding index of sorted wieghtage array c by comparing with d array and storing to e array
    int e[a],k=0;
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if (c[i]==d[j]){
                e[k]=j;
                d[j]=1234567890;
                k++;
                break;
            }
        }
    }
    // printing number from b and wieghtage from c
    for (i=0;i<a;i++){
        printf("<%d_%d> ",b[e[i]],c[i]);
    }
    return 0;
}