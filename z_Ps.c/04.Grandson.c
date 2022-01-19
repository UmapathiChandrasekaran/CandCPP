// Given a two dimensional array of string like 
// <”luke”, “shaw”>  
// <”wayne”, “rooney”>  
// <”rooney”, “ronaldo”>  
// <”shaw”, “rooney”> 
// Where the first string is “child”, second string is “Father”. 
// And given “ronaldo” we have to find his no of grandchildren 
// Here “ronaldo” has 2 grandchildren. So our output should be 2.





#include<stdio.h>
int main()
{
     
     int r,c;
    //geting rows and coloumn
     printf("number of rows: ");
     scanf("%d",&r);
    printf("\nnumber of coloumns: ");
     scanf("%d",&c);
     
     
     // storing string to array
     char name[10][10][20];
     int i,j;
      
     for(i=0; i<r; i++){
         for(j=0; j<c; j++)
     {
     scanf("%s[^\n]",name[i][j]);
     }
     }
     
     
    //  sub string
    printf("enter the sub string\n");
     char s[20];
     scanf("%s[^\n]",s);
     
     //sub string length
     int q;
     for(q=0;s[q]!='\0';q++){}
     
     //checking every 1st colomn in row
    int k,l,w[10],e=0;
    j=1;
     for(i=0; i<r; i++){
     for(k=0;name[i][j][k]!='\0';k++){
     }
        l=0;
        if (k==q){
            for(k=0;k<q;k++){
                if(s[k]==name[i][j][k]){
                    l++;
                }
            }
            if(l==k){
                w[e]=i;
                e++;
            }
        }
     }
//storing row numbers in w array
// finding grand cild using W
     int co=0,f,g;
     for (f=0;f<e;f++){
            j=0;
         for(q=0;name[w[f]][j][q]!='\0';q++){}
         
     // checking 1st coloumn in every row
    g=1;
     for(i=0; i<r; i++){
         //sub string length
     for(k=0;name[i][g][k]!='\0';k++){
     }
        l=0;
        if (k==q){
            for(k=0;k<q;k++){
                if(name[w[f]][j][k]==name[i][g][k]){
                    l++;
                }
            }
            if(l==k){
                co++;
            }
        }
     }
         
     }
printf("%d",co);
     return 0;
}