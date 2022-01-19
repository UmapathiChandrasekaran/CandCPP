// Enter two strings from command line and check whether any substring present 
// in first string that follows the pattern of second sting.. 
// They asked to implement  regular expressions for * and backslash without built in functions.
// “abcd” “a*cd” answer : yes 
// “aaaa” “a*”  answer : yes 
// “a*c” “a\*c” answer:yes 
// “adsd” “ad” answer:no 
#include <stdio.h>

int main() {
    //string arrays
    char a[100],b[100];
    //int i for loop,c for count,k for if * found or not
    int i,c,k;
    //geting string array
    printf("Enter the words\n");
    scanf("%s %s",a,b);
    //loop for itrating
    for(i=0;a[i]!='\0';i++){
        //b[i] is not equal to null
        if (b[i]!='\0'){
            //a[i] is equal to b[i] count+=1
            if (a[i]==b[i]){
                c+=1;
            }
            // if * is present
            else if(a[i]=='*'||b[i]=='*'){
                k=1;
                printf("yes");
                break;
            }
        }
    }
    //* not present and count eqyal to i
    if(c==i&&k!=1){
        printf("yes");
    }
    //* not present and not equal to i
    else if(c!=i&&k!=1){
        printf("no");
    }
    return 0;
}