#include <stdio.h>
int main()
{
//array
    int arr[] = {20, 23, 1, 88, 99};
//arrays for storing odd and even
// j for index of even array, k for index of odd array
    int even[10], odd[10], j=0, k=0;
// to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
// adding element if element is even to even array 
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        // adding element if element is even to odd array 
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }
    //printing array
    printf("even array : ");
    for (int i = 0; i < j; i++)
    {
        printf("%d  ", even[i]);
    }

    printf("\nodd array : ");
    for (int i = 0; i < k; i++)
    {
        printf("%d  ", odd[i]);
    }
    printf("\n");
    return 0;
}