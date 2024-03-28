Submitted on 11:39 25 Dec 2023 || Result: PASSED [PPPPPPPPPP] Explain results
เขียนโปรแกรมเพื่อรับจำนวนเต็มบวก N (N <= 26) เพื่อแสดงรูปแบบสะท้อนขนาด N ของชุดตัวอักษร

รูปแบบสะท้อนมีลักษณะดังนี้

#size N = 3
c-b-a-b-c

#size N = 5
e-d-c-b-a-b-c-d-e

#size N = 10
j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j

หมายเหตุ

หากไม่สามารถสร้างรูปแบบสะท้อนขนาด N ของชุดตัวอักษรได้ ให้พิมพ์ -
ให้ใช้ Loop ในการแสดงรูปแบบสะท้อนดังกล่าว
ตัวอย่างโปรแกรม 1

3
c-b-a-b-c
ตัวอย่างโปรแกรม 2

5
e-d-c-b-a-b-c-d-e
ตัวอย่างโปรแกรม 3

0
-
Hint

ในภาษาซี สามารถแปลง character เป็น ascii code ด้วยวิธีนี้

int code;
code = (int)'a'; // code = 97
code = 'a'; // code = 97
printf("%d", 'a'); // 97
ในทำนองเดียวกัน สามารถแปลง ascii code เป็น character ด้วยวิธีนี้
char c;
c = (char)97; // c = 'a'
c = 97; // c = 'a'
printf("%c", 97); // a

[hide line #]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char size_str[20] ;
    int size , ch , start;
    fgets(size_str,sizeof(size_str),stdin);
    size = atoi(size_str);

    if (size <= 0 || size > 26){
        printf("-");
    } else {
        start = 96+size;
        ch = start;
        while (ch > 97) {
            printf("%c-",ch);
            ch -= 1;
        }
        while (ch <= start) {
            if (ch == start){
                printf("%c",ch);
            } else {
                printf("%c-",ch);
            }
            ch += 1;
        }
    }
}
