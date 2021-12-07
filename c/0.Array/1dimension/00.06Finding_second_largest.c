#include <stdio.h>
int main()
{
//array
    int arr[] = {20, 23, 1, 88, 99};
// l and sl for storing largest value
    int l=arr[0],sl=arr[0];
    // to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
if(arr[i]>l){
    sl=l;
    l=arr[i];
}
    }
printf(" second largest value=%d",sl);
    return 0;
}