//  To output the number in words (0-999) 
//  Input: 234 
//  Output: Two hundred and Thirty Four 




#include <stdio.h>
// function for 1-9
char first(char *s[1]){
    if (s=='1'){
        printf("one");
    }
    if (s=='2'){
        printf("two");
    }
    if (s=='3'){
        printf("three");
    }
    if (s=='4'){
        printf("four");
    }
    if (s=='5'){
        printf("five");
    }
    if (s=='6'){
        printf("six");
    }
    if (s=='7'){
        printf("seven");
    }
    if (s=='8'){
        printf("eight");
    }
    if (s=='9'){
        printf("nine");
    }
}

//function for 20 to 90
char second(char *s[1]){
    if (s=='2'){
        printf("twenty");
    }
    if (s=='3'){
        printf("thirty");
    }
    if (s=='4'){
        printf("fourty");
    }
    if (s=='5'){
        printf("fifty");
    }
    if (s=='6'){
        printf("sixty");
    }
    if (s=='7'){
        printf("seventy");
    }
    if (s=='8'){
        printf("eighty");
    }
    if (s=='9'){
        printf("ninty");
    }
}

//function for 11 to 19
char ele(char *s[1]){
    if (s=='1'){
        printf("eleven");
    }
    if (s=='2'){
        printf("twelve");
    }
    if (s=='3'){
        printf("thirten");
    }
    if (s=='4'){
        printf("fourteen");
    }
    if (s=='5'){
        printf("fifteen");
    }
    if (s=='6'){
        printf("sixteen");
    }
    if (s=='7'){
        printf("seventeen");
    }
    if (s=='8'){
        printf("eighteen");
    }
    if (s=='9'){
        printf("nineteen");
    }
}

int main() {
    // getting number
    char s[3];
    int i;
    printf("enter the number");
    gets(s);
    // length of number
    for (i=0;s[i]!='\0';i++){
    }
    // three number
    if (i==3){
        //calling 1-9 function
        first(s[0]);
        printf(" hundred ");
        // if last two digit =10
        if (s[1]=='1'&&s[2]=='0'){
             printf("and ten");
        }
        //if second number consist 1
        else if (s[1]=='1'){
            printf("and ");
            //calling 11to19 function
            ele(s[2]);
        }
     // if second number consist of 0 
        else if (s[1]=='0'&& s[2]!='0'){
            printf("and ");
            // calling 1 to 9 function
            first(s[2]);
        }
            // if last number consist of 0 
       else if (s[2]=='0'&& s[1]!='0'){
           printf("and ");
           //calling 20to 90 function
            second(s[1]);
        }
        else if (s[2]!='0'&& s[1]!='0'&&s[1]!='1'){
           printf("and ");
           //calling 20to 90 function
            second(s[1]);
            printf(" ");
            // calling 1 to 9 function
            first(s[2]);
        
    }
    }
     // two number
    if (i==2){
        // if two digit =10
        if (s[0]=='1'&&s[1]=='0'){
             printf("ten");
        }
         //if second number consist 1
        else if (s[0]=='1'){
            //calling 11to19 function
            ele(s[1]);
        }
             // if second number consist of 0 
       else if (s[1]=='0'&& s[0]!='0'){
           //calling 20to 90 function
            second(s[0]);
        }
        else if (s[1]!='0'&&s[0]!='1'){
            //calling 20to 90 function
            second(s[0]);
            printf(" ");
            // calling 1 to 9 function
            first(s[1]);
        
    }
    }
     // one number
    if (i==1){
        // number is zero
        if (s[0]=='0'){
            printf("zero");
        }
        else{
            // calling 1 to 9 function
            first(s[0]);
        }
    }
    return 0;
} 