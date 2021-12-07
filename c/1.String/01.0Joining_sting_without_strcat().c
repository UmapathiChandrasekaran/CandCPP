#include <stdio.h>

void main() {
    char a[25]="hello My ",b[25]="Peter! ";
    int i=0,j=0;
    // Write C code here
    while(a[i]!='\0'){
        i++;
    }
    while(b[j]!='\0'){
        a[i]=b[j];
        i++;
        j++;
    }
    a[i]='\0';
    printf("string = %s",a);
    
}