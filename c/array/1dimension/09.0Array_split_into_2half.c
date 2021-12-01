#include <stdio.h>
int main()
{
//array
    int arr[] = {20, 23, 1, 88, 99};
//arrays for storing odd and even
// j for index of first array, k for index of second array
    int first[10], second[10], j=0, k=0;
// to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
// adding element if index is lesser than half length
        if (i<len/2)
        {
            first[j] = arr[i];
            j++;
        }
        // adding element if index is greater than half length 
        else
        {
            second[k] = arr[i];
            k++;
        }
    }
    printf("first half array : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d  ", first[i]);
    }

    printf("\nseconf half array : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d  ", second[i]);
    }
    printf("\n");
    return 0;
}