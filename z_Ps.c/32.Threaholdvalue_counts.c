// Given an array and a threshold value find the o/p 
// eg) 
// i/p={5,8,10,13,6,2};
// threshold = 3;      
// o/p  
// count = 17      
// explanation: 
// Number  parts               counts 
// 5       {3,2}                 2
// 8       {3,3,2}               3 
// 10      {3,3,3,1}             4 
// 13      {3,3,3,3,1}           5 
// 6       {3,3}                 2 
// 2       {2}                   1 
#include <stdio.h>

int main() {
    // c is count, i for loop, a is array and t is threshold
    int c=0,i,a[6]={5,8,10,13,6,2},t=3;
    //loop for itration of elements in array
    for(i=0;i<6;i++){
        //if a[i] has no reminder
        if(a[i]%t==0){
            c+=a[i]/t;
        }else{
            //if a[i] has reminder
            c+=a[i]/t+1;
        }
    }
    //printing count
    printf("%d",c);
    
    return 0;
}