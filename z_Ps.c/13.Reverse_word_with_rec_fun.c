//  Using Recursion reverse the string such as 
// Eg 1: 
// Input: one two three      
// Output: three two one 
// Eg 2: 
// Input: I love india      
// Output: india love I



#include <stdio.h>
//function defining
//function type char
char rev(char *a){
    // i and j for loop and c for count
    int i,j,c=0;
    for(i=0;a[i]!='\0';i++){
        //storing the space index
        if (a[i]==' '){
            c=i;
        }
    }
        if(c==0){
            // if there is no space it will print array
            puts(a);
        }
        else{
            //print index to end
            for(j=c+1;j<i;j++){
                printf("%c",a[j]);
            }
            // gap space 
            printf(" ");
            // seting space index to null
            a[c]='\0';
            // passing a to the function again
            rev(a);
            
        }
    
}
int main() {
    // Write C code here
    char f[60]="Hello peter parker! (^_^)";
    rev(f);
    return 0;
}