int main()
{
    //a[100] is array, i and j is for loop, s is total elements of array,p for position.
    //m for number elements
   int a[100],i,j,s,p,m;
 printf("enter the number of of elements:");
 scanf("%d",&s);
 for (i=0;i<s;i++){
     printf("\n%d:",i);
     scanf("%d",&a[i]);
 }
 //printing array
 printf("\narray\n");
 for (i=0;i<s;i++){
     printf("%d ",a[i]);
 }
printf("\n enter the number of elements to be deleted");
scanf("%d",&m);
if (m<=s-1){
//loop for number of element deleted
for(j=0;j<m;j++){
/// geting position of element
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
}
}
else {
    printf("In valid input");
}
return 0;
}