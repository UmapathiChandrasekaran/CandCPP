#include <stdio.h>
#include <string.h>

int main() {
    // string declaration
    char str[100];
    //i for loop, len for storing length
    int i,len;
    //geting string from user
    printf("enter the string\n");
    scanf("%s",str);
    //loop runs untill there is null value
    for (i=0;str[i]!='\0';i++){
        len++;
    }
      printf("length=%d",len);
    return 0;
}