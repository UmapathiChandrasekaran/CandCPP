#include <stdio.h>

int main() {
 //a[100] is array, j is for loop, s is total elements of array,
    //i for index,p for position.
   int a[100],i,j,s,e;
 printf("enter the number of of elements:");
 scanf("%d",&s);
 for (i=0;i<s;i++){
     printf("\n%d:",i);
     scanf("%d",&a[i]);
 }
  printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
 // geting element
printf("\n enter the element to be deleted");
scanf("%d",&e);
//index position
 for(i=0;i<s;i++){
     if (a[i]==e){
         for(j=i;j<s;j++){
             a[j]=a[j+1];
         }
         s--;
         i--;
     }
 }
for(i=0;i<s;i++){
    printf("%d ",a[i]);
}
    return 0;
}