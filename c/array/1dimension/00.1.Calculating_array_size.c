#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5,6,7,8,9,10},size;
//Calculate length of the array ( Number of elements)
    size=sizeof(a)/sizeof(int);
//size of a is giving array size in bits
//size of int giving integer size in bits
    printf("\n%d",size);
    
    return 0;
}