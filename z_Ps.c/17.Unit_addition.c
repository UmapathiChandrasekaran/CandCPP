// Number of elements in set1: 4 
// Elements are: 9, 9, 9, 9 
// Number of elements in set 2: 3 
// Elements are: 1,1,1 
// Output: 1, 0, 1, 1, 0 
// Input: 
// Number of elements in set1: 11 
// Elements are: 7,2,3,4,5,3,1,2,7,2,8 
// Number of elements in set 2: 3 
// Elements are: 1,2,3 
// Output: 7,2,3,4,5,3,1,2,8,5,

#include <stdio.h>

int main() {
    //s1 and s2 are array, set1 and set2 are length of arrays
    // iand j are loop variables,  c is carry
    int set1,set2,s1[100],s2[100],i,j,temp,c=0;
    
    //gerting arrays
    
    printf("Enter the Number of element set1:");
    scanf("%d",&set1);
    for (i=0;i<set1;i++){
         printf("%d :",i);
        scanf("%d",&s1[i]);
    }
    printf("Enter the Number of element set2:");
    scanf("%d",&set2);
     for (i=0;i<set2;i++){
         printf("%d :",i);
        scanf("%d",&s2[i]);
    }
    //setting j to second array last position
    j=set2-1;
   //loop for s1 array backwards
    for(i=set1-1;i>=0;i--){
    // if j is greater than or equal to 0
         if (j>=0){
             
    //   if s1[i]+s2[j]+c is greater than or equal to 10
    if (s1[i]+s2[j]+c>=10){
        //add all and get reminder with division of 10
        s1[i]=(s1[i]+s2[j]+c)%10;
        // set carry to 1
        c=1;
    }
    else{
        //add all and asign
        s1[i]=(s1[i]+s2[j]+c);
        c=0;
    }
    //for travelling in s2 decrementing j
    j--;
    }
    else{
        // if j==-1
        break;
    }
    }
    
    // if c=1 and elements in s1 are left
    while(i>=0){
        // while i is greater than or equal to 0
    if (s1[i]+c>=10){
    //   if s1[i]+c is greater than or equal to 10
        s1[i]=(s1[i]+c)%10;
     //add all and get reminder with division of 10
        c=1;
        // set carry to 1
    }
    else{
         //add all and asign
        s1[i]=(s1[i]+c);
        c=0;
    }
    //for travelling in s1 decrementing i
    i--;
    }
    
    //after no elements in array s1 if c=1
    if(c==1&&i==-1){
        //swapping backwards
        for(j=set1;j>0;j--){
            temp=s1[j];
            s1[j]=s1[j-1];
            s1[j-1]=temp;
            // printf("c=%d ",s1[j]);
        }
        // inserting c to first position
        s1[0]=c;
        // changing length 
        set1+=1;
    }
    
    // printing array
    for (i=0;i<set1;i++){
         printf("%d ",s1[i]);
    }
    
    return 0;
}