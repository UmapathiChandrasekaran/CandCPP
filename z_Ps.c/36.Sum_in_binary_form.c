// A number is called as binary-decimal if all the digits in the number should be either ‘1’ or ‘0’. 
// Any number can be written as a sum of binary-decimals. 
// Our task is to find the minimum number of binary-decimals to represent a number.
// Input : 32
// Output : 10 11 11 
// Input : 120 
// Output : 10 110 

#include <stdio.h>

int main()
{
int a,i,q[20],c=0,ic=0;
for(i=0;i<20;i++){
    
    q[i]=0;
}
printf("enter the number: ");
scanf("%d",&a);
while(a!=0){
    for(i=0;i<a%10;i++) {
        if(q[i]==0){                                                                        
            q[i]=1;
        }
        else{
        q[i]=(q[i]*10)+1;
    }
    ic++;
    }
    if(ic>c){
        c=ic;
    }
for(i=a%10;i<20;i++){
    if(q[i]==1){
q[i]=q[i]*10;
printf("%d",q[i]);
}
    }
    ic=0;
    a=a/10;
}
for(i=0;i<c;i++){
    printf("%d\n",q[i]);
}
} 