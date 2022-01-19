// You’re given an array. 
// Print the elements of the array which are greater than 
// its previous elements in the array. 
// Input : 
// 2, -3, -4, 5, 9, 7, 8  
// Output: 
// 2 5 9
// You should solve this question in O(n) time.
#include <stdio.h>

int main() {
    //array a, i for loop
    int a[6]={2,-3,-4,5,9,7,8},i;
    // loop for itrating
    for(i=0;i< 6;i++)
    {
        // if i==0 or i-1<i
        if(i==0||a[i-1]<a[i]){
        // printing element
        printf("%d ",a[i]);
        }
    }
    
    return 0;
}