#include <stdio.h>

int main() {
    //arrays
    int a[] = {10,20,30,40,50},b[] = {60,70,80,90,100};
    //merge array
    int merge[100];
    //i for loop
    int i;
      // to get a length of an array
    int lena = sizeof(a) / sizeof(int); 
    int lenb = sizeof(b) / sizeof(int); 
    //printing array
    for(i=0;i<(lena+lenb);i++){
        //if i is lesser then first array add first array
        if(i<lena){
    merge[i]=a[i];
        }
        else{
            //if i is greater than first array then subract with first array length
            merge[i]=b[(i-lena)];
        }
    }
    for (i=0; i < lena+lenb; i++)
    {
       printf("%d ",merge[i]);
        }
    return 0;
}