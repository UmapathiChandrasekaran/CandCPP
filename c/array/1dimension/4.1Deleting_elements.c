#include <stdio.h>
int main()
{
    //a[100] is array, i and k for loop, s is total elements of array,
    //j for index,p for position,m for number elements
   int a[100],i,j,k,s,e,m;
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
 printf("\n enter the number of elements to be deleted");
scanf("%d",&m);
if (m<=s-1){
//loop for number of element deleted
for(k=0;k<m;k++){
// geting element
printf("\n enter the element to be deleted");
scanf("%d",&e);
//index position
for (i=0;i<s;i++){
    if (a[i]==e){
        j=i;
    break;
    }
}
//decrementing size of array after deleting element
s--;
for (i=j;i<s;i++){
    //element from position will be filled with next element
    a[i]=a[i+1];
}
 //printing array
printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
}}
 return 0;
}