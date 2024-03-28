Submitted on 22:57 13 Jan 2024 || Result: PASSED [P] Explain results
ให้เติมส่วนของโปรแกรมที่มีการเก็บข้อความ "Computer Programming"
และให้โปรแกรมแสดงข้อความตามตัวอย่าง โดยใช้หลักการของ pointer

Sample Output

Computer Programming
ter Programming
 Programming

[hide line #]
#include<stdio.h>
int main()
{
    char item[25] =
"Computer Programming"
;
    char *a1=
item
, *a2;
    printf("%s\n",a1);
    a2 =
item+5
;
    printf("%s\n",a2);
    a2 =
item+8
;
    printf("%s\n",a2);
    return 0;
}

