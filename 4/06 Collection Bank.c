Submitted on 6:26 08 Jan 2024 || Result: PASSED [PPPPPP] Explain results
Write a program to find out how many days a kid can collect money up to specific amount.

First, the program asks the kid the goal amount of money he aims to collect. From that, everyday, the program asks the kid to enter leftover money from his stipend and reports (1) the total amount on that day, (2) remaining money to collect. When the goal money is reached, the program will report how many it takes to collect money.

Assume the kid always enters positive amount of money.

เขียนโปรแกรมเพื่อหาจำนวนวันที่จะต้องใช้ในการเก็บเงินให้ได้ตามเป้าหมาย

โดยโปรแกรมจะต้องถามจำนวนเงินที่เป็นเป้าหมายในการเก็บเงินในบรรทัดแรก จากนั้น แต่ละวันโปรแกรมจะให้ใส่จำนวนเงินที่จะเก็บเพิ่ม และออกรายงานตามตัวอย่าง โดยมีข้อมูลดังนี้ (1) จำนวนวันที่ใช้ในการเก็บเงิน (2) ยอดเงินคงเหลือที่ต้องการเพื่อให้ถึงเป้าหมาย และเมื่อเก็บเงินจนถึงเป้าหมายแล้ว โปรแกรมจะรายงานว่าใช้เวลากี่วันในการเก็บเงิน

สมมติว่าข้อมูลนำเข้าเป็นจำนวนบวกเสมอ

Sample output 1
Enter your goal amount: 100.00
Enter money collected today: 20.00
Total money collected up to day 1 is 20.00. You need 80.00 more.
Enter money collected today: 10.00
Total money collected up to day 2 is 30.00. You need 70.00 more.
Enter money collected today: 15.00
Total money collected up to day 3 is 45.00. You need 55.00 more.
Enter money collected today: 30.00
Total money collected up to day 4 is 75.00. You need 25.00 more.
Enter money collected today: 25.00
Congratulations! You take 5 days to reach your goal.
Sample output 2
Enter your goal amount: 25
Enter money collected today: 5.50
Total money collected up to day 1 is 5.50. You need 19.50 more.
Enter money collected today: 10.25
Total money collected up to day 2 is 15.75. You need 9.25 more.
Enter money collected today: 10
Congratulations! You take 3 days to reach your goal.

[hide line #]
#include <stdio.h>
#include <stdlib.h>

int main(){
    char goal_str[20] , col_str[20];
    int day=1;
    float goal , col , total_col=0 , more;

    printf("Enter your goal amount: ");
    fgets(goal_str,20,stdin);
    goal = atof(goal_str);

    while (1){
        printf("Enter money collected today: ");
        fgets(col_str,20,stdin);
        col = atof(col_str);
        total_col += col;
        more = goal-col;
        goal = more;

        if (more<0){
            more=0;
        }
        
        if(!more){
            if(day==1){
                printf("Congratulations! You take %d day to reach your goal.",day);
                break;
            } else {
                printf("Congratulations! You take %d days to reach your goal.",day);
                break;
            }
            
        } else {
            printf("Total money collected up to day %d is %.2f. You need %.2f more.\n",day,total_col,more);
            day += 1;
        }
        
    }

}
