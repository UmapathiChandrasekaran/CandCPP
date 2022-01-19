//  Alternate sorting: 
//  Given an array of integers, rearrange the array in such a way that 
//  the first element is first maximum and second element is first minimum. 
//  Eg.) Input  : {1, 2, 3, 4, 5, 6, 7}         
//  Output : {7, 1, 6, 2, 5, 3, 4} 


#include <stdio.h>

int main() {
    //number of elements
    int q;
    printf("enter the elements of string");
    scanf("%d",&q);
    // array 
    int a[q],i;
    for (i=0;i<q;i++){
        printf("%d :",i);
        scanf("%d",&a[i]);
    }
    int j=0,temp;
    //sorting
    for(i=0;i<q;i++){
        for(j=0;j<q;j++){
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    //arranging element in another array
    i=0;
    j=q-1;
    int b[q],k=0;
    // if array has even elements
    if (q%2==0){
    while(i<q/2){
        b[k]=a[j];
        k++;
        j--;
        b[k]=a[i];
        k++;
        i++;
        
    }
    }
    //if array has odd elements
    else{
        while(i<q/2){
        b[k]=a[j];
        k++;
        b[k]=a[i];
        k++;
        i++;
        j--;
        }
        b[k]=a[i];
    }
    // printing b array 
    for(i=0;i<q;i++){
        printf("%d ",b[i]);
    }
    return 0;
}