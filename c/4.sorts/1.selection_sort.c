#include <stdio.h>

int main() {
    //q for length, iand j for loop, min for minimum, a is array
    int a[100],q,i,j,min,temp;
    //geting arrray from user
    printf("enter the length of array ");
    scanf("%d",&q);
    for(i=0;i<q;i++){
        printf("\n%d :",i);
    scanf("%d",&a[i]);
    }
    //sorting array
    for(i=0;i<q;i++){
        //seting min to i
        min=i;
        for(j=i;j<q;j++){
            if (a[j]<a[min]){
                //if smaller elemnt occurs chaning min to j position
                min=j;
            }
        }
        //swaping i to min 
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    //printing array
    for(i=0;i<q;i++){
        printf("%d ",a[i]);
    }
    return 0;
}