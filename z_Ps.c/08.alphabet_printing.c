// Write a program to give the following output for the given input 
// Eg 1: Input: a1b10       
// Output: abbbbbbbbbb 
// Eg: 2: Input: b3c6d15          
// Output: bbbccccccddddddddddddddd 
// The number varies from 1 to 99.

#include <stdio.h>

int main() {
    // i for outer loop, m for count loop, l=count
    int i,m,l;
    char s[50]="b3c6d15";
    //loop to run all elements
    for (i=0;s[i]!=0;i++){
        //storing ascii value  of character
        int j=s[i];
        //if ascii value is lesser than 58 then it is numbers
         if (58>j){
             // checking next element is number or not
             int k=s[i+1];
             if(58>k){
                //  if it is number
                 int t=s[i-1];
                 //checking  i-1 is small alphabets or not
                if(t>57){
               l=((j-48)*10)+(k-48);
               // seting count 
               // ascii value of 0 is 48 so 48-48 =0
               //subracting 48 to the ascii values of numbers
               // if i+1 is number then (i-48)*10+(i+1)-48
               
               
               //printing small alphabets
               for(m=0;m<l;m++){
             printf("%c",s[i-1]);
               }
                }
         }
        //  if i+1 is not a number 
         else{
            //  setting l=j-48
             l=j-48;
             //printing count
             for(m=0;m<l;m++){
             printf("%c",s[i-1]);
               }
         }
             }
    }
    
    return 0;
}