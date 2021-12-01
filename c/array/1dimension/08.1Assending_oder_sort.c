#include <stdio.h>

int main() {
    int a[]={9,1,8,2,7,0,6,3,5,4},size,i,temp,j;
//Calculate length of the array ( Number of elements)
    size=sizeof(a)/sizeof(int);
//printing array
for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
//checking a[i] is lesser than a[j]
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<size;i++){
    printf("%d ",a[i]);
}
    return 0;
}