#include <stdio.h>

int main() {
//Intializing array,i for loop,j for index,len for length. 
    int arr[]={10,20,30,40,50,60,70,80,90,100,110,120},i,j,len,temp=0;
    len=sizeof(arr)/sizeof(int);
//declaring j to last index of array
    j=len-1;
//loop for 3rd quater of array
    for (i=len/2;i<(len/2+len/4);i++){
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