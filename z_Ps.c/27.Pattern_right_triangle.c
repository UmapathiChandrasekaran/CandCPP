//enter the number   5
// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15
#include <stdio.h>

int main() {
    // i for outer loop,j for inner loop,n for height of pramid
    //k for numbering, kk for calculation on inner loop
    int i,j,n,k=1,kk;
    //geting number
    printf("enter the number :");
    scanf("%d",&n);
    //outr loop runs with n times
    for(i=0;i<=n;i++){
        //inner loop runs i times
        for(j=0;j<i;j++){
            // if j==0 print k and assign kk=k
            if(j==0){
            printf("%d ",k);
            kk=k;
            //incrementing k value
            k++;
            }
            // else kk=kk+n-j
            else{
                kk=kk+(n-j);
                printf("%d ",kk);

            }
        }
        printf("\n");
    }
    
    return 0;
}