Submitted on 6:05 12 Feb 2024 || Result: PASSED [] Explain results || Manual : 10/10
เมื่อสิ้นสุดการทำงานของส่วนของโปรแกรมต่อไปนี้

[hide line #]
int i, j=12;
int *pi, *pj=&j;
*pj = j+3;
i = *pj+7;
pi = pj;
*pi = i+j;
สมมติให้ตำแหน่งหน่วยความจำที่เก็บตัวแปร i คือ FF04 และตัวแปร j คือ FF00 จงเติมค่าของตัวแปรหรือนิพจน์ต่อไปนี้

&i = 
FF04
1

&j = 
FF00
1

pj = 
FF00
1

*pj = 
37
1

i = 
22
1

pi = 
FF00
1

*pi = 
37
1

pi+2 = 
FF08
1

*pi+2 = 
39
1

*pi+*pj = 
74
1
