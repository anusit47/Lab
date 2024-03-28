Submitted on 14:41 04 Dec 2023 || Result: PASSED [PPPPPPPPPPPPP] Explain results
ทอนเงิน (อย่างง่าย)
สมมติว่ามีธนบัตรใบละ 50, 20, 5 และ 1 บาท ให้ตัวแปร amount เก็บค่าจำนวนเงินที่ต้องทอน (เป็นจำนวนเต็มเสมอ) แล้วแสดงผลลัพธ์เป็นจำนวนธนบัตรแต่ละชนิดที่ต้องทอน โดยกำหนดให้ทอนเป็นธนบัตรชนิดราคาสูงกว่าให้ได้มากที่สุดก่อน แต่ให้พิมพ์คำตอบเรียงลำดับจากธนบัตรชนิดราคาต่ำ ไปหาราคาสูงที่สุด

ตัวอย่างผลลัพธ์เมื่อตัวแปร amount มีค่า 98
1: 3
5: 1
20: 2
50: 1
ตัวอย่างผลลัพธ์เมื่อตัวแปร amount มีค่า 19
1: 4
5: 3
20: 0
50: 0
ตัวอย่างผลลัพธ์เมื่อตัวแปร amount มีค่า 50
1: 0
5: 0
20: 0
50: 1
พิมพ์โปรแกรมของคุณลงในช่องว่างข้างล่างนี้


[hide line #]
#include <stdio.h>

int main()
{
   int amount = ...;

    
int fifty = amount/50;
   int amount2 = amount%50;
   int twenty = amount2/20;
   int amount3 = amount2%20;
   int five = amount3/5;
   int amount4 = amount3%5;
   int one = amount4;


   printf("1: %d\n5: %d\n20: %d\n50: %d", one, five, twenty, fifty);

    return 0;
}
