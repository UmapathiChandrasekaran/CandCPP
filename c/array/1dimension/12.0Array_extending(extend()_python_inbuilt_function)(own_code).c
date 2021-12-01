#include <stdio.h>
int main()
{
//arrays
    int a[] = {10,20,30,40,50},b[] = {60,70,80,90,100};
    //i for loop
    int i;
    // to get a length of an array
    int lena = sizeof(a) / sizeof(int); 
    int lenb = sizeof(b) / sizeof(int); 
    //printing array
    for(i=lena;i<(lena+lenb);i++){
    a[i]=b[i-lena];
    }
    for (i=0; i < lena+lenb; i++)
    {
       printf("%d ",a[i]);
        }
    return 0;
}