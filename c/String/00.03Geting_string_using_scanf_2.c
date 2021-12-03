#include <stdio.h>

int main() {
//character array
    char a[20];
    printf("enter the string\n");
    scanf("%[^\n]s",&a);
    printf("string = %s",a);


    
    return 0;
}