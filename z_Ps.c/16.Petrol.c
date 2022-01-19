// A man his driving car from home to office with X petrol. 
// There are N number of petrol bunks in the city with only few capacities and 
// each petrol is located in different places For one km one liter will consume. 
// So he fill up petrol in his petrol tank in each petrol bunks. 
// Output the remaining petrol if he has or tell him that he cannot travel 
// if he is out of petrol. 
// Input: Petrol in car: 2 
// Liters Petrol bunks: A B C 
// Distance from petrol each petrol bunks: 1, 5, 3 
// Capacities of each petrol bunk: 6, 4, 2 
// Output: Remaining petrol in car is 5 liters 





#include <stdio.h>

int main() {
    //ptrl is petrol, ns=number of station, i for loop, st is station,c is capacity
    int ptrl,ns,i,st[100],c[100];
    //geting starting petrol
    printf("enter the starting petrol");
    scanf("%d",&ptrl);
    //no of station
    printf("no of station");
    scanf("%d",&ns);
    //storing data to st array
    for (i=0;i<ns;i++){
    printf("%d:",i);
    scanf("%d",&st[i]);
    }
     //storing data to c array
    printf("cap of station");
    for (i=0;i<ns;i++){
    printf("%d:",i);
    scanf("%d",&c[i]);
    }
    // subracting st 1st element and adding c's 1st element
    for(i=0;i<ns;i++){
        ptrl=ptrl-st[i]+c[i];
    }
    //if ptrl is greater than 0
    if (ptrl>0){
        //remaining liters
    printf("%d",ptrl);
    }
    else{
        //out of petrol
        printf("he cannot travel, he is out of petrol");
    }
    
    return 0;
}