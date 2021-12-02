#include <stdio.h>

int main() {
    //arrays
    int a[] = {1,-1,9,0,2,5,9,8},b[] = {-1,2,7,10,3,9};
    //merge array
    int merge[100];
    //i,j,k for loop
    int i=0,j=0,k=0,temp;
      // to get a length of an array
    int lena = sizeof(a) / sizeof(int); 
    int lenb = sizeof(b) / sizeof(int); 
    //loop will run when i and j is lesser than their length
    while (i<lena && j<lenb){
        //if a is smaller added to merge array
        if (a[i]<=b[j]){
            merge[k]=a[i];
            j--;
        }
        //if b is smaller added to merge array
        else{
            merge[k]=b[j];
            i--;
         }
        //for loop run
        k++;
        i++;
        j++;
    }
    //loop for remaining element 
    while(i<lena){
        merge[k]=a[i];
        i++;
        k++;
    }

    while(j<lenb){
        merge[k]=b[j];
        j++;
        k++;
    }
    //sorting
    for(i=0;i<k;i++){
    for(j=i+1;j<k;j++){
//checking a[i] is lesser than a[j]
        if(merge[i]>merge[j]){
            temp=merge[i];
            merge[i]=merge[j];
            merge[j]=temp;
        }
    }
}
//remove repeatation
for(i=1;i<k;i++){
    if(merge[i]==merge[i-1]){
        for(j=i;j<k;j++)
        merge[j]=merge[j+1];
    }
    k--;
}
     //printing array  
   
    for (i=0;i<k;i++){
    printf("\n%d ",merge[i]);
    }
    return 0;
}