int main()
{
    //a[100] is array, i is for loop, s is total elements of array,p for position.
   int a[100],i,s,p;
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
// geting position of element
printf("\n enter the position");
scanf("%d",&p);
// checking position is lesser then size of array
if (p-1<=s-1){
    //decrementing size of array after deleting element
s--;
for (i=p-1;i<s;i++){
    //element from position will be filled with next element
    a[i]=a[i+1];
}
 //printing array
printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
}
else {
    printf("not deletable");
}

 
return 0;
}