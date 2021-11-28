#include <stdio.h>


void main(){
//  declaring array a with size [100]
//(array should be sized in c so iam taking as 100)
int a[100];
// for loop variable
 int i;
 // number of elements
 int s;
 printf("enter the number of of elements:");
 scanf("%d",&s);
 //with for loop creating array
 for (i=0;i<s;i++){
     printf("\n%d:",i);
     scanf("%d",&a[i]);
 }
  //with for loop printing array
 printf("array\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
}