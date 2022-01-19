// Write a program to print the below pattern
// for n = 6        
// 1       7       12      16      19      21
// 2       8       13      17      20 
// 3       9       14      18      
// 4       10      15 
// 5       11      
// 6 
#include <stdio.h>

int main() {
    //n for colomn k for rows,l for number in coloumn,llfor colomns
    int i,j,n=6,k=6,l=1,ll;
    //coloumn loop
    for(i=0;i<n;i++){
        //row loop
        for(j=0;j<k;j++){
            //if j=0 print l
            if(j==0){
            printf("%d ",l);
            ll=l;
            l++;
            }
            // if j!=0 print ll
            else{
                ll=ll+n-j+1;
                printf("%d ",ll);
            }
        }
        printf("\n");
        k--;
    }
    
    return 0;
}