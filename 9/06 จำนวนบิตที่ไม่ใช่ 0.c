จำนวนบิตที่ไม่ใช่ 0
จงเติมโปรแกรมที่รับค่าจำนวนเต็มที่อยู่ในช่วงที่ตัวแปรประเภท unsigned char (8 บิต) สามารถเก็บข้อมูลได้ แล้วพิมพ์จำนวนบิตที่ไม่เป็น 0 ของค่านั้นออกมาดังตัวอย่าง

หมายเหตุ ให้ใช้ bitwise operators และ arithmetic operators ในการนับจำนวนบิตที่ไม่เป็น 0 เท่านั้น

ตัวอย่างผลลัพธ์ที่ 1
Enter an 8-bit number: 255
The number 255 has 8 non-zero bits
ตัวอย่างผลลัพธ์ที่ 2
Enter an 8-bit number: 7
The number 7 has 3 non-zero bits

[hide line #]
#include <stdio.h>

int main()
{   unsigned char x;
    int n;

    printf("Enter an 8-bit number: ");
    scanf("%d", &n);
    x = (unsigned char)n;
    int numbits =
    

    printf("The number %d has %d non-zero bits\n", x, numbits);
    return 0;
}