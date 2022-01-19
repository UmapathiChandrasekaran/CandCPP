// Save the string “WELCOMETOZOHOCORPORATION” in a two dimensional array and search for 
// substring like “too” in the two dimensional string both from left to right and from top to
// bottom.
 
// W   E   L   C   O   
// M   E   T   O   H   
// O   H   O   C   O   
// R   P   O   R   A   
// T   I   O   N   
 
// And print the start and ending index as Start index : <1,2> End index: <3, 2>
#include <stdio.h>

int main() {
    //string
    char a[50]="WELCOMETOHOHOCORPORATION";
    int i,j,k=0,size;
    //length
    while(a[i]!='\0'){
        i++;
    }
    size=i;
    //storing and printing array
    char r[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            r[i][j]=a[k];
            k++;
            printf("%c   ",r[i][j]);
        }
        printf("\n");
    }
    // sub string checking
     char b[3]="TOO";
    int l,m,c,rc;
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            //checking sub string starting leter
            
            //horizontal check
            if (r[i][j]=='T'){
            //rc is count
                rc=1;
            // assigning i,j to l,m
                l=i;
                m=j;
                // checking next elements
                for(c=1;c<3;c++){
                    if (r[l+1][m]==b[c]){
                        rc++;
                        //incrementing coloumn and count
                        l++;
                    }
                    // if count equal to  length
                    if (rc==3){
                        printf("%d,%d\n%d,%d",i,j,l,m);
                    }
            
            //vertical check
                    //rc is count
                rc=1;
                // assigning i,j to l,m
                l=i;
                m=j;
                // checking next elements
                for(c=1;c<3;c++){
                    if (r[l+1][m]==b[c]){
                        rc++;
                        //incrementing row and count
                        l++;
                    }
                    // if count equal to  length
                    if (rc==3){
                        printf("starting index= <%d,%d>\nending index= <%d,%d>",i,j,l,m);
                    }
                    
                }
    }
        }
    }
    }
    
    return 0;
}