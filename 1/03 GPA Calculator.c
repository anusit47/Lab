Submitted on 14:26 04 Dec 2023 || Result: PASSED [PPPP] Explain results
เขียนโปรแกรมเพื่อหาจำนวนเกรดเฉลี่ยที่ต้องทำในเทอมนี้ เพื่อให้ได้เกรดเฉลี่ยรวมที่ต้องการ
โดยตัวแปรเก็บค่าต่าง ๆ ดังนี้
preGrade เก็บค่า เกรดเฉลี่ยสะสมที่ผ่านมา
preCredit เก็บค่า หน่วยกิตสะสมที่คำนวณเกรดเฉลี่ยแล้ว
credit เก็บค่า หน่วยกิตของเทอมนี้
requiredGrade เก็บค่า เกรดเฉลี่ยรวมที่ต้องการ


หมายเหตุ
- เกรดเฉลี่ยที่คำนวณมาได้ แสดงเป็นทศนิยม 2 ตำแหน่ง
- หน่วยกิตเป็นจำนวนเต็ม
- เกรดเฉลี่ยที่คำนวณมาได้อาจมีค่าเกิน 4.00 (เพราะหวังสูง แต่ของเก่าไม่มากพอ)


ตัวอย่างผลลัพธ์ของค่าที่ปรากฏในโปรแกรม

The GPA this semester should be 2.29
อธิบาย: ลงทะเบียนเรียนไปแล้ว 21 หน่วยกิต ได้เกรดเฉลี่ยสะสม 1.75 และในเทอมนี้ลงทะเบียนเรียน 18 หน่วยกิต ต้องการเกรดเฉลี่ยสะสม 2.00 จึงต้องทำเกรดเฉลี่ยเทอมนี้ให้ได้ 2.29


[hide line #]
#include<stdio.h>
int main()
{
    
float
 preGrade = 1.75;
    
int
 preCredit = 21;
    
int
 credit = 18;
    
float
 requiredGrade = 2.00;
    
float GPA = ((requiredGrade*(credit+preCredit))-(preGrade*preCredit))/credit;
printf("The GPA this semester should be %.2f", GPA);

    return 0;
}