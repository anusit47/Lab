Submitted on 14:03 18 Dec 2023 || Result: PASSED [PPPPPP] Explain results
Write a program that get an integer n and print the number from n down to 0 if n >= 0

Example 1
13
13
12
11
10
9
8
7
6
5
4
3
2
1
0
Example 2
0
0
Example 3
-1
Example 4
1
1
0
Complete the program below


[hide line #]
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ns[20] ;
    int n;
    
    fgets(ns,20,stdin);
    n = atoi(ns);

    for ( n; n >= 0; n-- ){
        printf("%d\n",n);
    }


}
