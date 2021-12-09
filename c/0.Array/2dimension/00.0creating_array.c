#include <stdio.h>

int main() {
    // a for rows and b for coloumn
    int a,b;
    printf("enter the rows");
    scanf("%d",&a);
    printf("enter the coloumn");
    scanf("%d",&b);
    // c is array
    // i and j for loops
    int c[a][b],i,j;
    //storing arrays
    for (i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d,%d =",i,j);
            scanf("%d",&c[i][j]);
        }
    }
    // printing barray
    printf("\n array\n");
     for (i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d  ",c[i][j]);
        }
         printf("\n");
    }
    
    return 0;
}