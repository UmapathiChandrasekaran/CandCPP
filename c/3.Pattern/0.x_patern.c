
// P            m
//   r        a  
//     o    r    
//       g      
//     o  r      
//   r      a    
// P          m  

#include <stdio.h>

void main() {
    //string
    char a[50]="Program";
    // i,j for loop and k,r for index size to store size
    int i=0,j=0,k=0,r,size;
    //loop for length
    while(a[i]!='\0'){
        i++;
    }
    // storing size
    size=i;
    // for reverse index
    r=size-1;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            //condition check if i==j
            // printing string with k index
            if(i==j){
                printf("%c",a[k]);
                k++;
            }
            //condition check if i+j=size-1
            // printing string with r index
            if(i+j==size-1){
                // condition check i!=j
                if(i!=j){
                printf("%c",a[r]);
                r--;
                }
                else{
                    r--;
                }
            }
            else{
                 printf("  ");
            }
        }
        printf("\n");
    }
}