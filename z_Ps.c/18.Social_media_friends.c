// Help john to find new friends in social network
// Input: 
// 3 
// Mani 3 ram raj guna 
// Ram 2 kumar Kishore 
// Mughil 3 praveen Naveen Ramesh 
// Output: 
// Raj guna kumar Kishore praveen Naveen Ramesh 






#include<stdio.h>

int main(){
    // n for number of friends,i and k for loop,
    int n,t,i,j=0,k,f;
    // a array for storing first namespace//b array is for storing remaining names
    char a[100][100],b[100][100];
    // geting first name length
    scanf("%d",&n);
    // loop for length
    for(i=0;i<n;i++){
        //geting first name and new name length
        scanf("%s %d",a[i],&t);
        //length loop
        while(t--){
            //storing to b array
            scanf("%s",b[j]);
            j++;
        }
    }
    // loop for  b array
    for(i=0;i<j;i++){
        //intializing f =0
        f=0;
        //loop for a array
        for(k=0;k<n;k++){
            // checking a element is equal to b element
            if(strcmp(a[k],b[i])==0){
                // if it is eqaul setting f =1
                f=1;
            }
        }
        // printing b element if it is equal to zero
        if(f==0){
            printf("%s ",b[i]);
        }
    }
}