#include <stdio.h>

int main() {
     int a[]={1,2,3,4,5,6,7,8,9,10},size,i;
//Calculate length of the array ( Number of elements)
    size=sizeof(a)/sizeof(int);
//printing array
for(i=size-1;i>=0;i--){
    printf("%d ",a[i]);
}
    
    return 0;
}