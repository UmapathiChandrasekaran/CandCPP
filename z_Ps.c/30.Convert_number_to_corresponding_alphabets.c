// Given a number, convert it into corresponding alphabet.
// Input: 1 Output: A     
// Input: 26 Output: Z     
// Input: 27 Output: AA
// Input: 676 Output: ZZZ


#include <stdio.h>

int main() {
    // num=number,i for loop,as for ascii values,c for count 
    int num,i,as,c=0;
    //getting number
    printf("enter the number:");
    scanf("%d",&num);
    //i=num
    i=num;
    //if i>26
    if(i>26){
        //counting length of number
    while(i%10!=0){
        i=i/10;
        c+=1;
    }
    //if num divided by 26 and leaves 0 set to 26
if(num%26==0)
{
    as=26;
}
//else setting as to reminder
else{
    as=num%26;
}
}
//else as to num and count to 1
else{
    as=num;
    c=1;
}
    for(i=0;i<c;i++){
        printf("%c",as+64);
    }
    
    return 0;
}