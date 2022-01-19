// To find the factors of the numbers given in an array 
// and to sort the numbers in descending order according
// to the factors present in it. 
// Input: Given array : 8, 2, 3, 12, 16 
// Output: 12, 16, 8, 2, 3



#include <stdio.h>

int main() {
    //a is array,b is for storing factors,c is cor swapping, d for storing indexes
    //i and j for looping, kand co for storing index of array
    int a[5]={8,2,3,12,16},b[50],c[50],d[50],i,j,co=0,k=0,temp;
    for(i=0;i<5;i++){
        // ;loop to run with elements
        int count=0;
        //count for storing factors
        for(j=1;j<=a[i];j++){
            //factor loop
            if (a[i]%j==0){
                // if j is a factor
                // incrementing count
                count+=1;
            }
        }
        //storing count to b and c array
        b[k]=count;
        c[k]=count;
        // k is the index of array
        k++;
    }
    // swapping c array elements in decending oder
    for (i=0;i<k;i++){
        for (j=0;j<k;j++){
        if (c[j]<=c[i]){
            temp=c[j];
            c[j]=c[i];
            c[i]=temp;
        }
        }
    }
    //storing index of elements in d array
     for (i=0;i<k;i++){
         for (j=0;j<k;j++){
             if(c[i]==b[j]){
                 d[co]=j;
                 b[j]=1234567890;
                 co+=1;
             }
         }
     }
     // printing a acording to index in d
     for (i=0;i<k;i++){
        printf("%d ",a[d[i]]);
     }
     
    return 0;
}