Submitted on 5:54 08 Jan 2024 || Result: PASSED [PPPPP] Explain results
Draw triangle 4 #
Your job is to write a program to draw a triangle.

The program receives a number n as a height of triangle.

Then the program print a triangle with the height = n and base = (2n-1) using *, with the base on the left of the screen, as in the examples.

Sample output 1

2
*
**
*
Sample output 2

9
*
**
***
****
*****
******
*******
********
*********
********
*******
******
*****
****
***
**
*

[hide line #]
#include <stdio.h>
#include <stdlib.h>

void row(int length){
    int i ;

    for (i=1;i<=length;i++){
        printf("*");
    }
    printf("\n");
}


int main(){
    char n_str[20] ;
    fgets(n_str, 20, stdin);
    int n , i ;
    n = atoi(n_str);

    for (i=1;i<=n;i++){
        row(i);
    }
    for (i=(n-1);i>=1;i--){
        row(i);
    }
    

}
