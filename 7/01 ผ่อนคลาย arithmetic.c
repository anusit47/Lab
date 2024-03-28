Submitted on 4:18 12 Feb 2024 || Result: PASSED [PPPPPPP] Explain results
จงตอบค่าของตัวแปรที่กำหนด


[hide line #]
int a=4, b=3, c, d, e;
float f=2,g=5, h, i, j, k;

c = f/b*f;                 /* c = ? */
h = a++/(float)b;          /* h = ? */
j = (float)c/h--;          /* j = ? */
d = b*h/c;                 /* d = ? */
i = d*f+h--;               /* i = ? */
e = a*d++/i;               /* e = ? */
k = (int)i*d/(float)a;     /* k = ? */
ทุกคำสั่งมีความต่อเนื่องกัน

หมายเหตุ
ถ้าคำตอบเป็น type int ตอบเป็นเลขจำนวนเต็ม
ถ้าคำตอบเป็น type float ตอบเป็นเลขทศนิยม 2 ตำแหน่ง


[hide line #]
c = "
1
";
h = "
1.33
";
j = "
0.75
";
d = "
1
";
i = "
2.33
";
e = "
2
";
k = "
0.80
";
