Submitted on 5:57 12 Feb 2024 || Result: PASSED [] Explain results || Manual : 10/10
เมื่อสิ้นสุดการทำงานของส่วนของโปรแกรมต่อไปนี้

[hide line #]
int a[10] = {0, 1}, *ptr;
int  k;
ptr  =  a+2;
for(k=2; k<10; k++)
    a[k] = a[k-1]+a[k-2];
สมมติให้ตำแหน่งหน่วยความจำที่เก็บตัวแปร a คือ FFE0 จงเติมค่าที่เก็บในตัวแปรต่อไปนี้

*ptr = 
1
1

*(ptr+1) = 
2
1

ptr = 
FFE8
1

ptr[3] = 
5
1

ptr[-1] = 
1
1

&a[4] = 
FFF0
1

*(ptr+2) = 
3
1

ptr+3 = 
FFF4
1

&ptr[3] = 
FFF4
1

ptr[5] = 
13
1
