//  Form a number system with only 3 and 4. 
//  Find the nth number of the number system. 
//  Eg.) The numbers are: 
//  3, 4, 33, 34, 43, 44, 333, 334, 343, 344, 433, 434, 443, 444, 3333, 3334, 3343, 
//  3344, 3433, 3434, 3443, 3444 …. 




#include <stdio.h>

int main() {
    int a[50]={3,4};
    int i=2,j=2,k,l,sr,stp;
    while (i<15){
        if(k!=0){
        sr=k;
        stp=k+j;
            
        }
        else{
            sr=0;
            stp=j;
        }
        //  printf("\ni=%d\n",i);
        for(k=sr;k<stp;k++){
            if(i>=15){
            break;
        }
            // printf("%d\n%d\n",a[k]*10+3,a[k]*10+4);
            a[i]=a[k]*10+3;
            a[i+1]=a[k]*10+4;
            i+=2;
        }
        j=j*2;
       
        // printf("\ni=%d\n",i);
    }
for(k=0;k<15;k++){
    printf("%d ",a[k]);
}
    return 0;
}