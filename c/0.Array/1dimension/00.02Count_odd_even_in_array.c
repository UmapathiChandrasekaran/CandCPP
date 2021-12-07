#include <stdio.h>
int main()
{
//array
    int arr[] = {20, 23, 1, 88, 99};
// even for even element count, odd for odd element count
    int even=0, odd=0;
// to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
// adding element if element is even to even array 
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        // adding element if element is even to odd array 
        else
        {
            odd++;
        }
    }
printf("even count = %d\noddcount =%d ", even,odd);
    return 0;
}