Submitted on 3:49 08 Jan 2024 || Result: PASSED [PPPPPP] Explain results
ฟังก์ชัน is_prime()
เราเรียกจำนวนเต็มบวก x ว่าเป็นตัวเลขเฉพาะ (prime number) ถ้าจำนวนเต็มบวกทั้งหมดที่หาร x ได้ลงตัว คือ 1 และตัวมันเองเท่านั้น

จงเขียนฟังก์ชัน

 int is_prime(int x);
ซึ่งคืนค่า 0 ถ้า x ไม่ใช่จำนวนเฉพาะ และ 1 ถ้า x เป็นจำนวนเฉพาะ

แล้วให้โปรแกรมนี้รับค่าข้อมูลเข้าที่เป็นจำนวนเต็มบวก n (n มีค่าไม่เกิน 10000) จากนั้นให้แสดงค่าจำนวนเฉพาะที่อยู่ในช่วงปิด [1, n]

ตัวอย่างผลลัพธ์
10
2 is a prime number.
3 is a prime number.
5 is a prime number.
7 is a prime number.
19
2 is a prime number.
3 is a prime number.
5 is a prime number.
7 is a prime number.
11 is a prime number.
13 is a prime number.
17 is a prime number.
19 is a prime number.

[hide line #]
#include <stdio.h>
#include <stdlib.h>

int is_prime(int x){
    int cnt=0 , i ;
    for (i=1;i<=x;i++){
        if (x%i == 0) {
            cnt += 1;
        }
    }
    if (cnt == 2){
        return 1;
    } else {
        return 0;
    }
}


int main() {
  char input[5];
  fgets(input, 5, stdin);

  int i, n;

  n = atoi(input);

  for (
i=1;i<=n;i++
) {
      if (is_prime(i)) {
          printf("%d is a prime number.\n", i);
      }
  }

  return 0;
}