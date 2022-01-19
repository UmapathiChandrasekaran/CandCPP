// Input
//a={1,2,3,4,5,6,7}
// Output:
// 7 6 5 4 3 2 1

#include <stdio.h>

int main() {
    //arays
   int a[]={1,2,3,4,5,6,7};
   //size to find length of array
   int size;
 size=sizeof(a)/sizeof(int);
 // i for loop
 int i;
 //printing array in reverse
 for (i=size;i>=0;i--){
     printf("%d ",a[i]);
 }
    return 0;
}