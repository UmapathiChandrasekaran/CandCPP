#include <stdio.h>

int main() {
    //arrays
    int a[] = {10,20,40,50,60,100},b[] = {10,40,60,80,90};
    //merge array
    int merge[100];
    //i for loop
    int i=0,j=0,k=0;
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
    //Removing duplicates
    for (i=1; i <k; i++)
    {
        // if repeatation found      
        if(merge[i]==merge[i-1]){
            //swapping loop
            for (j=i;j<k;j++){
                merge[j]=merge[j+1];
            }
            k--;
        }
        }
     //printing array    
    for (i=0;i<k;i++){
        printf("%d ",merge[i]);
    }
    return 0;