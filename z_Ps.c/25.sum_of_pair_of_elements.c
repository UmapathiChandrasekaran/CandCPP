//  Given unsorted array find all combination of the element for a given sum. 
//  Order should be maintained. 
//  Input : 
//  8 3 4 7 9 
//  N=7 
//  Output:
//  {3 4 } {7} 
#include <stdio.h>

int main() {
    //string array
    int a[5]={8,3,4,7,9};
    //int i and j for loop,n for number 
    int i,j,n;
    //geting n
    printf("N=: ");
    scanf("%d",&n);
    //loop for itrating
    for(i=0;i<5;i++){
        if((a[i]-n)<0){
            for(j=i;j<5;j++){
            if(n-a[i]==a[j]){
                // printing elements
                printf("%d %d N=%d\n",a[i],a[j],n);
            }   
            }
        }
        
    }

    return 0;
}