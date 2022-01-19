//  Write a program to sort the elements in odd positions in descending order and elements in 
//  ascending order 
// Eg 1: Input: 13,2 4,15,12,10,5        
// Output: 13,2,12,10,5,15,4 
// Eg 2: Input: 1,2,3,4,5,6,7,8,9        
// Output: 9,2,7,4,5,6,3,8,1 


#include <stdio.h>

int main() {
    //q for length, iand j for loop, min for minimum, a is array
    int a[100],q,i,j,min,temp;
    //geting arrray from user
    printf("enter the length of array ");
    scanf("%d",&q);
    for(i=0;i<q;i++){
        printf("\n%d :",i);
    scanf("%d",&a[i]);
    }
    //sorting array
    for(i=0;i<q;i++){
        //seting min to i
        min=i;
        for(j=i;j<q;j++){
            if (a[j]<a[min]){
                //if smaller elemnt occurs chaning min to j position
                min=j;
            }
        }
        //swaping i to min 
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    // if q is even setting j =q-2 for odd position
    if(q%2==0){
        j=q-2;
    }
    else{
        //else j=q-1
    j=q-1;
    }
    //swapping
    for(i=0;i<q/2;i+=2){
        //loop run to its half length
        //loop runs only in odd position
        
        //swaping i and j index element
        // printf(" i=%d,j=%d\n",i,j);
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j-=2;
        //decrementing j=-2 to travell in odd position
    }
    //printing array
    for(i=0;i<q;i++){
        printf("%d ",a[i]);
    }
    return 0;
}