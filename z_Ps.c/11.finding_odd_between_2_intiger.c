// To find the odd numbers in between the range. 
// Input: 2 15 
// Output: 3,5,7,9,11,13



#include <stdio.h>

int main() {
    int a,b,i;
    //entering starting value
        printf("enter the starting value :");
        scanf("%d",&a);
        //entering ending value
        printf("enter the ending value :");
        scanf("%d",&b);
        //seting loop between starting and ending values
        for(i=a;i<b;i++){
            if(i%2!=0){
                // printing if it is odd
                printf("%d ",i);
            }
        }
    
    return 0;
}