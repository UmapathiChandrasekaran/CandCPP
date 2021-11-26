#include <stdio.h>
int main()
{
    //a[100] is array, i is for loop, s is total elements of array
    // m for number of elements to be added,p for position,
    // v is the number to be added in array.
   int a[100],i,j,s,m,p,v;
 printf("enter the number of of elements:");
 scanf("%d",&s);
 for (i=0;i<s;i++){
     printf("\n%d:",i);
     scanf("%d",&a[i]);
 }
// Getting number of elements to be added
printf("\n enter the number of elements to be added");
scanf("%d",&m);
// for loop for adding elements
for(j=0;j<m;j++){
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
}
 //printing array
 printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
return 0;
}