Submitted on 4:16 18 Dec 2023 || Result: PASSED [PPPPP] Explain results
ให้เขียนโปรแกรมสำหรับตรวจสอบว่าตัวอักษรที่พิมพ์เข้ามาเป็นอักษรชนิด ตัวพิมพ์เล็ก (lower case), ตัวพิมพ์ใหญ่ (upper case), ตัวเลข (digit), หรือเป็นอักษรประเภทอื่น (others)

ตัวอย่างผลลัพธ์
b
Output: lower case 
7
Output: digit
W
Output: upper case
+
Output: others

[hide line #]
#include <stdio.h>
int main(){
    int ch;
    ch = getchar();
    if (ch >= 48 && ch <= 57){
        printf("Output: digit");
    } else if (ch >= 65 && ch <= 90){
        printf("Output: upper case");
    } else if (ch >= 97 && ch <= 122){
        printf("Output: lower case ");
    } else {
        printf("Output: others");
    }
}
