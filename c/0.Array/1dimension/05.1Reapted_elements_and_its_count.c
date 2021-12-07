#include <stdio.h>

int main() {
//i,j,k are for loop, q is for storage,a is array, s is size
//c for counting
int i,j,k,c,q,a[]={1,2,1,3,4,2,1,4,2,0,5,0,6,7,9},s=15;
//1st loop for storing element
for(i=0;i<s;i++){
     //storing i element
    q=a[i];
    //intializing count to 1
    c=1;
    //2nd loop for repeation check
    for(j=i+1;j<s;j++){
        // condition if reaptation occurs
         if (a[j]==q){
        // incrementing count if reapted element occurs
         c++;
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
//printing elements if count is more than 1
    if(c>1){
        printf("\n%d repeated %d",a[i],c);
    }
}
    return 0;
}