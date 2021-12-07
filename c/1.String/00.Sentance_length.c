#include <stdio.h>
#include <string.h>

int main() {
    //string array
    char a[15];
    printf("enter the string\n");
    //input from user
    gets(a);
    //len and iteration
    int i=0;
    //length of string loop
    //condition i and i+1 is not equal to null
    while(a[i]!='\0' && a[i+1]!='\0'){
        i++;
    }
    printf("\nlength=%d",i+1);
    
    return 0;
}