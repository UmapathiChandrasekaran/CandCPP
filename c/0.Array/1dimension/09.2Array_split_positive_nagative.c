#include <stdio.h>
int main()
{
    int arr[7] = {-20, 23, -1, 88, 99, 0, 2};
    //arrays for storing positive and negative
// j for index of positive array, k for index of negative array
    int pos[10], neg[10], j=0, k=0;
    // to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
    // adding element if element is positive to positive array 
        if (arr[i] >= 0)
        {
            pos[j] = arr[i];
            j++;
        }
    // adding element if element is negative to negative array 
        else
        {
            neg[k] = arr[i];
            k++;
        }
    }
    
//printing array
    printf("postive array : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d  ", pos[i]);
    }

    printf("\nnegative array : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d  ", neg[i]);
    }
    printf("\n");
    return 0;
}