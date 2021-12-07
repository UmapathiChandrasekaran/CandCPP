#include <stdio.h>

int main() {
//Intializing array,i for loop,j for index,len for length. 
    int arr[]={10,20,30,40,50,60,70,80,90,100,110,120},i,j,len,temp;
    len=sizeof(arr)/sizeof(int);
//declaring j to middle index of array
    j=len/2-1;
//loop for 1st quater of array
    for (i=0;i<len/4;i++){
//swaping elements
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        
    }
//printing array
    for(i=0;i<len;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}