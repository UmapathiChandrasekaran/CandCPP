#include <stdio.h>

int main() {
    //i,j,k are for loop, q is for storage,a is array, s is size 
int i,j,k,q,a[]={0,1,2,1,3,4,2,1,4,2,0,5,0,6,7,9},s=16;
//1st loop for storing element
for(i=0;i<s;i++){
    //storing i element
    q=a[i];
    //2nd loop for repeation check
    for(j=i+1;j<s;j++){
        // condition if reaptation occurs
         if (a[j]==q){
             //swapping loop
         for(k=j;k<s;k++){
             a[k]=a[k+1];
         }
//if reapting occurs reducing array size after swapping
         s--;
         // reseting j to last position
         j--;
     }
    }
}
//printing array
for(i=0;i<s;i++){
    printf("%d",a[i]);
}
    return 0;
}