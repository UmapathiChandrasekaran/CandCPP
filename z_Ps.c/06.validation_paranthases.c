//  Remove unbalanced parentheses in a given expression. 
//     Eg.) Input  : ((abc)((de))         
//     Output : ((abc)(de))  
//     Input  : (((ab)
//      Output : (ab) 
     
     
     
     
     
     
#include <stdio.h>

int main() {
     char a[50];
     printf("enter the string");
     gets(a);
    int i,j=0,c=0,b=0,k;
    
    
    //checking ( open braceses
    for (i=0;a[i]!='\0';i++){
        //chcking open brace presence
        if(a[i]=='('){
            // increasing open brases count
                b+=1;
                // if open braceses found checking for close braceses
                if(j==0||i>j){
                    //if j=0 or i greater than j then set j value as i+1
                    j=i+1;
                }
                else{
                    //else j value as k 
                    j=k;
                }
        //checking for ( close braceses
        for(j=j;a[j]!='\0';j++){
                if(a[j]==')'){
                    // if close braces present then increasing Closing brace count
                    c+=1;
                    // seting k value as j+1
                    k=j+1;
                    break;
                }}
            }
        }
// if open braces are higher deleting last occourence of (
    if (b>c){
    while(b!=c){
        // loop exist if b equal to c
        //finding last occurance of ( braceses
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='('){
        j=i;
        }
}
// swapping elements
for(i=j;a[i]!=0;i++){
    a[i]=a[i+1];
}
// decrementing open braceses count
b-=1;
}
}

//checking ) close braceses


int l;
// seting counts to 0
    c=0;
    b=0;
    // l = length of string
    for (l=0;a[l]!='\0';l++){}
    //j is set to len
    j=l;
     //chcking close brace presence from backwards
    for (i=l;i>=0;i--){
        //chcking close brace presence
        if(a[i]==')'){
            // increasing close brases count
                b+=1;
                // if close braceses found checking for open braceses
                if(j==l||i<j){
                //if j=0 or i lesser than j then set j value as i-1
                    j=i-1;
                }
                else{
                    //else j value as k 
                    j=k;
                }
        //checking for ( open  braceses
        for(j=j;j>=0;j--){
            // if close  braces present then increasing open brace count
                if(a[j]=='('){
                    c+=1;
                    // seting k value as j-1
                    k=j-1;
                    break;
                }}
            }
        }
// if close braces are higher deleting last occourence of )
    if (b>c){
    while(b!=c){
        // loop exist if b equal to c
        //finding last occurance of ) braceses
    for(i=l;i>=0;i--){
        if(a[i]==')'){
        j=i;
        }
       
}
// swapping elements

for(i=j;i<=l;i++){
    a[i]=a[i+1];
}
// decrementing close braceses count
b-=1;

    }
    }
//printing array

for(i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
}
     
    return 0;
}