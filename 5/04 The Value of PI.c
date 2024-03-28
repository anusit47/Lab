The Value of \( \pi \)
Calculate the value of \( \pi \) from the infinite series

\[ \pi = 4 - \frac{4}{3} + \frac{4}{5} - \frac{4}{7} + \frac{4}{9} - \frac{4}{11} + ... \]

Write the program to input integer n where n > 0

and print the value of \( \pi \) approximated by n term of this series

Example 1
Enter n: 3
3.4666666667
Example 1
Enter n: 100000
3.1415826536

[hide line #]
#include <stdio.h>

int main(){
    int n , i, odd=1;
    double value, under=1;

    printf("Enter n: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){

        if(odd){
            value += 4/under;
            odd -= 1;
        } else {
            value -= 4/under;
            odd += 1;
        }

        under += 2;
    }
    printf("%.10lf",value);
}
