// Input
//a={1,2,3,4,5,6,7}
// Output:
// 1 2 3 4 5 6 8

#include <stdio.h>

int main() {
    //arays
   int a[]={1,2,3,4,5,6,7};
   //size to find length of array
   int size;
 size=sizeof(a)/sizeof(int);
 //adding 1 to last element
 a[size-1]=a[size-1]+1;
 // i for loop
 int i;
 //printing array
 for (i=0;i<size;i++){
     printf("%d ",a[i]);
 }
    return 0;
}