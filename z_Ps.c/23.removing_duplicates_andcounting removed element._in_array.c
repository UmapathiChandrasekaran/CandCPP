 // Input
//a={5,5,9,9,100,100,100,100,1000,1000,1000,6000}
// Output:
// 5 9 100 1000 6000 
//count=7 

#include <stdio.h>

int main() {
    //aray
   int a[]={5,5,9,9,100,100,100,100,1000,1000,1000,6000};
   //size to find length of array
   int size;
 size=sizeof(a)/sizeof(int);
 // i,j,k for loop
 int i,j,k,count=0;
 //outerloop
 for (i=0;i<size;i++){
    //  printing elemrnt
     printf("%d ",a[i]);
     //search loop
     for(j=i+1;j<size;j++){
         //if it is equal to a[i]
         if(a[i]==a[j]){
             //increasing count by 1
             count+=1;
             //swapping
             for(k=j;k<size;k++){
                 a[k]=a[k+1];
             }
             //decrementing size
             size-=1;
             //decrementing j
             j--;
         }
     }
     
 }
//  printing count
 printf("\ncount=%d ",count);
    return 0;
}