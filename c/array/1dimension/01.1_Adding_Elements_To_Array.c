#include <stdio.h>
int main()
{
    //a[100] is array, i is for loop, s is total elements of array, v is the number to be added in array.
   int a[100],i,j,m,s,v;
 printf("enter the number of of elements:");
 scanf("%d",&s);
 for (i=0;i<s;i++){
     printf("\n%d:",i);
     scanf("%d",&a[i]);
 }
//  intserting

//Getting number of elements to be added
printf("\n enter the num,ber of elements to be added");
scanf("%d",&m);
// for loop to add elements
for(j=0;j<m;j++){
printf("\nenter the value to be added");
scanf("%d",&v);
 a[s]=v;
 //incrementing size of array after adding element
 s++;
}
 
 printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
return 0;
}