#include <stdio.h>
int main()
{
//array
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    //temp for tempraary storage,i for loop
    //s=staring point,e=ending point
    int temp,i,s,e;
    // to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    //printing array
    for(i=0;i<len;i++){
    printf("%d ",arr[i]);
    }
    printf("\nenter the starting value\n");
    scanf("%d",&s);
    printf("\nenter the ending value\n");
    scanf("%d",&e);
    //loop starting with start value and end with end value
    for (i = s-1; i < e-1; i++)
    {
       printf("%d ",arr[i]);
        }
    return 0;
}