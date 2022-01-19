// Check whether a given mathematical expression is valid. 
// Eg) 
// Input  : (a+b)(a*b)         
// Output : Valid
// Input  : (ab)(ab+)         
// Output : Invalid
// Input  : ((a+b)         
// Output : Invalid 
         
         
         
#include <stdio.h>

int main() {
    char s[50]="(a+b)(a*b)";
    int ls,i,j,o=0,c=0;
    for(ls=0;s[ls]!=0;ls++){
        if(s[ls]=='('){
            o+=1;
            if(s[ls+1]=='+'||s[ls+1]=='-'||s[ls+1]=='*'||s[ls+1]=='/'){
                printf("Invalid");
                break;
            }
        }
        else if (s[ls]==')'){
            c+=1;
            if(s[ls-1]=='+'||s[ls-1]=='-'||s[ls-1]=='*'||s[ls-1]=='/'){
                printf("Invalid");
                break;
        }
        else if(s[ls+1]=='\0'){
            if(o==c){
                printf("valid");
            }
            else{
                printf("Invalid");
            }
        }
        
    }
    }
    
    return 0;
}