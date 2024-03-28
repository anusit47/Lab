Submitted on 4:07 08 Jan 2024 || Result: PASSED [PPPPPPPPPPPP] Explain results
จำนวนตัวเลข
ให้เขียนโปรแกรมเพื่อรับเลขจำนวนเต็มไม่เกินเก้าหลัก (n) และเลขจำนวนเต็มหนึ่งหลัก (x โดยที่ 0 <= x <= 9) แล้วให้นับจำนวนของ x ที่มีใน n เช่น

ตัวอย่างที่ 1
346574390
3
There are 2 "3"(s) in 346574390.
ตัวอย่างที่ 2
454578
6
There is no "6" in 454578.
ตัวอย่างที่ 3
23450
0
There is only 1 "0" in 23450.
ตัวอย่างที่ 4
111111111
1
There are 9 "1"(s) in 111111111.

[hide line #]

#include <stdio.h>
#include <stdlib.h>

// Do the count by your function
// count target in n
int count_target(int n, int target)
{
int cnt=0;
    while (n>0) {
        if (target == n%10)
            cnt+=1;
        n /= 10;
    }
    return cnt;

}

int main() {
   char input_n[12], input_x[2];
   fgets(input_n, 12, stdin);
   fgets(input_x, 2, stdin);

   int n;
   int x, count;

   n = atoi(input_n);
   x = atoi(input_x);

   count = count_target(n, x);

   // Display output in separate cases
   //
   if (count <= 0) {
      printf("There is no \"%d\" in %d.\n", x, n);
   } else if (count == 1) {
      printf("There is only 1 \"%d\" in %d.\n", x, n);
   } else {
      printf("There are %d \"%d\"(s) in %d.\n", count, x, n);
   }
   return 0;
}