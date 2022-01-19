// Print the members which are mismatched from two array. 
// Arr1 = {a b c d e f g h i} 
// arr2 ={ a b d e e g g i i}, 
// O/P 
// cd, de, fg, hi. 
#include <stdio.h>

int main() {
    //arays
   char a[50]={'a','b','c','d','e','f','g','h','i'};
   char b[50]={'a','b','d','e','e','g','g','i','i'};
   // i for loop
   int i;
   // loop for element acessing
   for (i=0;a[i]!='\0';i++){
       //checking both are same or not
       if (a[i]!=b[i]){
        //   if not printing elements
      printf("%c%c ",a[i],b[i]);
      }
}
    return 0;
}