#include <stdio.h>

int main() {
    int num;
    double sqroot,temp;
    printf("enter the number: \n");
    scanf("%d", &num);
// store the half of the given number e.g from 256 => 128
    sqroot=num/2;
// Iterate until sqrt is different of temp, that is updated on the loop
    while(sqroot!=temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp=sqroot;
        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqroot=(num/temp+temp)/2;
    }

    printf("%f",sqroot);
    
    return 0;
}