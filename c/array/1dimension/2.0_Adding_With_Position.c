#include <stdio.h>
int main()
{
    //a[100] is array, i is for loop, s is total elements of array,p for position, v is the number to be added in array.
   int a[100],i,s,p,v;
 printf("enter the number of of elements:");
 scanf("%d",&s);
 for (i=0;i<s;i++){
     printf("\n%d:",i);
     scanf("%d",&a[i]);
 }
// geting position of array
printf("\n enter the position");
scanf("%d",&p);
//incrementing size of array after adding element
s++;
for (i=p-1;i<s;i++){
    //element from postion will move to next position
    a[i+1]=a[i];
}
// geting value to be added
printf("\nenter the value");
scanf("%d",&v);
// assigning value to its position
 a[p-1]=v;
 
 //printing array
 printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
return 0;
}