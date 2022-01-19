// 4. Write function to find multipication of 2 numbers using + operator 
// You must use minimu possible iterations. 
// Input: 3 , 4 
// Output 12
#include <stdio.h>

int main() {
    // i for loop, n for loop times, n1 for addition and r is result
    int i,n,n1,r=0;
    // geting 2 Nmbers
    printf("enterr the numbers:");
    scanf("%d %d",&n,&n1);
    //loop on n times
    for(i=0;i<n;i++){
        // adding n1 to r ntimes
        r+=n1;
    }
    //printing r
    printf("%d",r);
    return 0;
}