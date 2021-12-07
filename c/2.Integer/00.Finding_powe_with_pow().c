#include <stdio.h>
#include <math.h>

int main() {
    // intializing n is number, p is power,result
    double n,p,result;
     printf("enter the number");
    scanf("%lf",&n);
    printf("enter the power");
    scanf("%lf",&p);
    result=pow(n,p);
    printf("%lf",result);
    
    return 0;
}