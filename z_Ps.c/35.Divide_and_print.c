// Divide and print
//eg:
//input:
//spiderman
//output:
//srpmiadne


#include <stdio.h>
#include<string.h>

int main() {
//  character arrays
    char a[100];
    char b[50],c[50];
    // len for length and i for loop
    int len,i;
    //geting string from user
    printf("enterr the string..\n");
    scanf("%s",a);
    //defining len
    len=(strlen(a)/2)+1;
    for(i=0;i<len;i++){
        b[i]=a[i];
        c[i]=a[len+i];
    }
    //printing array
for(i=0;i<len;i++){
    if(b[i]!='\0'&&c[i]!='\0'){
        printf("%c%c",b[i],c[i]);
    }
    else if(b[i]!='\0'&&c[i]=='\0'){
        printf("%c",b[i]);
    }
    else if(c[i]!='\0'&&b[i]=='\0'){
        printf("%c",c[i]);
    }
}
    return 0;
}
 