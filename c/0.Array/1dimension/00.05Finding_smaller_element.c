#include <stdio.h>
int main()
{
//array
    int arr[] = {20, 23, 1, 88, 99};
// s for storing smaller value
    int s=arr[0];
    // to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
if(arr[i]<s){
    s=arr[i];
}
    }
printf("smaller value=%d",s);
    return 0;
}