// Input: PROGRAM 
// Output:
// ******G
// *****GR
// ****GRA
// ***GRAM
// **GRAMP
// *GRAMPR
// GRAMPRO

#include <stdio.h>

int main() {
    //string
    char p[]="PROGRAM";
    //i,j for loop, k for no of element
    int len,i,j,k=1;
    //length of string
    for(i=0;p[i]!='\0';i++)
//declaring l =i
len=i;
//outer loop
    for(i=0;i<=len;i++){
        //len-k for astrid
        for(j=0;j<=len-k;j++){
        printf("* ");
        }
        //loop for letters
        for(j=0;j<k;j++){
            //if k>len/2&&len/2+j>len printing from begining
            if(k>len/2&&len/2+j>len){
                    printf("%c ",p[len/2+j-len-1]);
            }
            // else printing from middle
            else{
                printf("%c ",p[len/2+j]);
            }
        }
        //new line
        printf("\n");
        // incrementing k
        k++;
    }
    return 0;
}  