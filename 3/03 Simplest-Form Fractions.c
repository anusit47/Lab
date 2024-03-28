Submitted on 10:50 25 Dec 2023 || Result: PASSED [PPPPPPPP] Explain results
เขียนโปรแกรมเพื่อรับค่าเศษส่วนในรูป a/b เมื่อ a และ b เป็นจำนวนเต็มบวกใด ๆ โดย a และ b มีค่าไม่เกิน 10000 บรรทัดแรกเป็นค่าเศษ a และบรรทัดที่สองเป็นค่าส่วน b
จากนั้นแสดงเศษส่วนอย่างต่ำของเศษส่วนดังกล่าว

เศษส่วนอย่างต่ำ คือ เศษส่วนที่อยู่ในรูป p/q โดย ห.ร.ม. ของ p และ q เป็น 1
กรณีที่ตัวส่วนของเศษส่วนอย่างต่ำ มีค่าเป็น 1 จะแสดงเฉพาะตัวเศษ
เศษส่วนอย่างต่ำ อาจอยู่ในรูป เศษส่วนแท้ หรือ เศษเกิน ก็ได้
ตัวอย่างโปรแกรม 1

108
96
= 9/8
ตัวอย่างโปรแกรม 2

25
5
= 5

[hide line #]

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main(){
    char as[20], bs[20];
    int a, b, big, small, fraction, gcd, p, q;

    fgets(as,sizeof(as),stdin);
    fgets(bs,sizeof(bs),stdin);
    a = atoi(as);
    b = atoi(bs);

    if (a>b){
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }
    
    while (fraction != 0){
        fraction = big % small;
        big = small;
        gcd = small;
        small = fraction;
    }

    p = a/gcd;
    q = b/gcd;
    if (q == 1){
        printf("= %d",p);
    } else {
        printf("= %d/%d",p,q);
    }

    }
