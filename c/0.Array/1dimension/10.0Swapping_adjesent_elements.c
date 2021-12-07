#include <stdio.h>
int main()
{
//array
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    //temp for tempraary storage,i for loop
    int temp,i;
    // to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    //loop
    for (i = 0; i < len; i+=2)
    {
        //condition checking i is lesser than len-2
        if(i<len-1){
            //swapping
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
}
//printing array
    for(i=0;i<len;i++){
printf("%d ",arr[i]);
}
    return 0;
}