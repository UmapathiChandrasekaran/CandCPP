// Reverse words in a given string
// Example: 
// Let the input string be 
// “i like this program very much”. 
// to 
// “much very program this like i”.
#include <stdio.h>

int main() {
    // Write C code here
    char a[]="i like this program very much";
    int i,j,e,l;
    for(i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
    }
    printf("\n");
    l=i;
    for(i=l;i>=0;i--){
        if(i==l){
            e=l;
        }
        if(a[i]==' '){
            for(j=i+1;j<=e;j++){
                printf("%c",a[j]);
            }
            printf(" ");
            e=i-1;
        }
    }
    return 0;
}