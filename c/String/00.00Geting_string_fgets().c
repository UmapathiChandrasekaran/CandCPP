#include <stdio.h>

int main() {
//character array
    char a[20];
    printf("enter the string\n");
    fgets(a,20,stdin);
    printf("string = %s",a);


    
    return 0;
}