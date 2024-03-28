Submitted on 2:18 13 Jan 2024 || Result: PASSED [PPPPPPP] Explain results
Calculator
Write the program that continuously asks for the operator (+, -, *, or /), and the operand (the next number), until the user enters a character other than the operator +, -, *, or /.
Each time the new number and the operator come in, the program computes and displays the present value by using the input operator, the last present value, and the newly-entered value. At the end, the program also displays the final value, as shown in a sample output below.

Sample Output 1
Initial Value: 10.45

Operator: +
Input Value: 4
Present Value is 14.4500

Operator: -
Input Value: 0.33
Present Value is 14.1200

Operator: *
Input Value: 12.5
Present Value is 176.5000

Operator: /
Input Value: 5.5
Present Value is 32.0909

Operator: @

Finish Calculation. Final Value is 32.0909

[hide line #]
#include <stdio.h>

int main(){
    double value , operand ;
    char operator;
    printf("Initial Value: ");
    scanf("%lf",&value);
    printf("\n");

    while(1){
        printf("Operator: ");
        scanf("\n%c",&operator);
        if (operator=='+'){
            printf("Input Value: ");
            scanf("%lf",&operand );
            value += operand;
            printf("Present Value is %.4lf\n\n",value);
        } else if (operator=='-'){
            printf("Input Value: ");
            scanf("%lf",&operand );
            value -= operand;
            printf("Present Value is %.4lf\n\n",value);
        } else if (operator=='*'){
            printf("Input Value: ");
            scanf("%lf",&operand );
            value *= operand;
            printf("Present Value is %.4lf\n\n",value);
        } else if (operator=='/'){
            printf("Input Value: ");
            scanf("%lf",&operand );
            value /= operand;
            printf("Present Value is %.4lf\n\n",value);
        } else {
            break;
        }   
    }
    printf("\nFinish Calculation. Final Value is %.4lf",value);
}
