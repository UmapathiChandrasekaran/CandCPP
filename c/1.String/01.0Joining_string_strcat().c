#include <stdio.h>
#include <string.h>
int main() {
    char a[50]="hello ",b[50]="peter";
    strcat(a,b);
    printf("%s",a);
    
    return 0;
}