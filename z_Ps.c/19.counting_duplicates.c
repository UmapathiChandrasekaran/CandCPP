//  Given a array with n elements print the number of occurrences of 
//  that number each number in that array. 
//  The order of number doesn’t matter. 
//  You can reorder the elements. 
//  Example : [2,1,3,2,2,5,8,9,8] 
//  Output: 
//  2-3 
//  1-1 
//  3-1 
//  5-1 
//  8-2 
//  9-1 
 
 #include<stdio.h>
 
 void main(){
    //  array a, len is length, i,j,k for loop and c for count
     int a[9]={2,1,3,2,2,5,8,9,8},len=9,i,j,k,c;
     //outer loop
     for (i=0;i<len;i++){
        //  printing element
         printf("%d",a[i]);
         //intailizing count to 1
         c=1;
         //searching loop 
         for(j=i+1;j<len;j++){
             //if found same number
             if(a[i]==a[j]){
                 //increasing count
                 c+=1;
                 //duplication removing loop
                 for(k=j;k<len;k++){
                     //swapping elements
                 a[k]=a[k+1];
             }
             //decrementing array length and j
             len-=1;
             j-=1;
         }
     }
    //  printing count
     printf("-%d\n",c);
     
 }
 }