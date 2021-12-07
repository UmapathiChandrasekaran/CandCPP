#include <stdio.h>

int main() {
//Intializing array,i for loop,j for index,len for length. 
    int arr[]={10,20,30,40,50,60,70,80,90,100,110,120},i,j,len,temp=0;
    len=sizeof(arr)/sizeof(int);
//checking whether array elements are even or odd
if(len%2==0){
    //declaring j to last odd index of array
    j=len-2;
}
else{
    //declaring j to last odd index of array
    j=len-1;
}
//loop for 1st half of array
    for (i=0;i<len/2;i+=2){
//swaping elements
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j-=2;
        
    }
//printing array
    for(i=0;i<len;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}