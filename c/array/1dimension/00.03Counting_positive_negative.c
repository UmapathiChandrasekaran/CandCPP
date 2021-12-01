#include <stdio.h>
int main()
{
    int arr[7] = {-20, 23, -1, 88, 99, 0, 2};
    //arrays for storing positive and negative
// pos for positive count, neg for negative count
    int pos=0, neg=0;
    // to get a length of an array
    int len = sizeof(arr) / sizeof(int); 
    for (int i = 0; i < len; i++)
    {
    // incrementing pos if element is positive 
        if (arr[i] >= 0)
        {
            pos++;
        }
    // incrementing neg if element is negative 
        else
        {
            neg++;
        }
    }
    
//printing count 
        printf("positive = %d\nnegative=  %d", pos,neg);
    return 0;
}