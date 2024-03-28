// Submitted on 7:04 12 Feb 2024 || Result: PASSED [PPPPPPPP] Explain results
// นับสระในสายอักขระ
// เขียนโปรแกรมภาษาซี รับ string เข้ามาหนึ่ง string ด้วย scanf() แล้วแสดงสระที่มีทั้งหมดใน string ดังกล่าวออกมา พร้อมกับแสดงจำนวนตัวอักขระที่เป็นสระด้วย ดังตัวอย่าง

// ตัวอย่างผลลัพธ์ที่ 1
// String (without a space): hello
// e o 
// This string contains 2 vowels.
// ตัวอย่างผลลัพธ์ที่ 2
// String (without a space): string
// i 
// This string contains 1 vowel.
// ตัวอย่างผลลัพธ์ที่ 3
// String (without a space): zzzZZ!

// This string contains 0 vowel.

// [hide line #]
#include <stdio.h>

int main() {
char str[100] , vowels[100]={0};
    int i , j=0 , cnt=0 ;
    printf("String (without a space): ");
    scanf("%s",str);
    for(i=0;str[i]!=0;i++)
    {
        if (str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' ||str[i]=='A' || str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
            {
                vowels[j++] = str[i];
                cnt++;
            }
    }
    if (cnt!=0)
    {
        for(i=0;vowels[i]!=0;i++)
            printf("%c ",vowels[i]);
    }
 
    printf("\nThis string contains %d vowel%s.",cnt,(cnt>1)?"s":"");

}