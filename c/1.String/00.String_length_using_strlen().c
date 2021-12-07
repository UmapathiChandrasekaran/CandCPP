#include <stdio.h>
#include <string.h>

int main() {
    // string declaration
    char str[100];
    //geting string from user
    printf("enter the string\n");
    scanf("%s",str);
    printf("length=%d",strlen(str));
    return 0;
}