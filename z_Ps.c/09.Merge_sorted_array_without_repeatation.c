// Given two sorted arrays, merge them such that the elements are not repeated 
// Eg 1: 
// Input:        
// Array 1: 2,4,5,6,7,9,10,13        
// Array 2: 2,3,4,5,6,7,8,9,11,15       
// Output:       
// Merged array: 2,3,4,5,6,7,8,9,10,11,13,15


#include <stdio.h>

int main() {
   int a[]={2,4,5,6,7,9,10,13},b[]={2,3,4,5,6,7,8,9,11,15};
   int c[50];
   // size of arrays
   int la=sizeof(a)/sizeof(int), lb=sizeof(b)/sizeof(int),i=0,j=0,k=0;
//   i and are lesser then la and lb
   while(i<la && j<lb){
    //   if a is lesser add to c array
       if(a[i]<=b[j]){
           // if k is 0 add a directly
           if(k==0){
               c[k]=a[i];
               }
               else{
            //check wheter a[i] is not equal to k-1
               if(c[k-1]!=a[i]){
                   c[k]=a[i];
               }
               // if a[i] is equal to c[k-1] decrementing k
               else{
                   k--;
               }
           }
           // loop incrementation
           i++;
           k++;
       }
      else{
          //if b is smaller
          if(k==0){
              // if k is 0 add b directly
              c[k]=b[j];
              }
              else{
                  //check wheter b[j] is not equal to k-1
              if(c[k-1]!=b[j]){
                  c[k]=b[j];
              }else{
                  // if b[j] is equal to c[k-1] decrementing k
                  k--;
              }
          }
          // loop incrementation
          j++;
          k++;
      }
   }
  while(i<la){
    //   if i <la adding remaining elements in array a
    // with checking a[i] not equal to c[k]
      if(a[i]!=c[k-1]){
        c[k]=a[i];
      }
      else{
          // if a[i] is equal to c[k-1] decrementing k
          k--;
      }
                // loop incrementation
        i++;
        k++;
    }
      while(j<lb){
          //   if j <lb adding remaining elements in array b
    // with checking b[j] not equal to c[k]
      if(b[j]!=c[k-1]){
        c[k]=b[j];
      }
      else{
          // if b[j] is equal to c[k-1] decrementing k
          k--;
      }
                // loop incrementation
        j++;
        k++;
    }

   for(i=0;i<k;i++){
       printf("%d  ",c[i]);
   }
    return 0;
}