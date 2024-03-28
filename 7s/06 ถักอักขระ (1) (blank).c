Submitted on 9:23 12 Feb 2024 || Result: PASSED [PPPPPP] Explain results View compiler messages
ถักอักขระ (1)
จงเติมโค้ดเพื่อให้โปรแกรมสามารถทำงานได้อย่างสมบูรณ์ โดยที่ฟังก์ชัน int charcount(char *s) จะนับจำนวนอักขระที่ปรากฏอยู่ในสายอักษรที่ส่งผ่านเข้ามาในฟังก์ชันตั้งแต่อักขระตัวแรกจนถึงอักขระตัวสุดท้ายก่อนหน้าอักขระนัลล์ (null character)

ส่วนฟังก์ชัน void charweave(char *s,char *result) จะถักอักขระโดยเก็บผลลัพธ์ของการถักนี้ไว้ในตัวแปร result การถักอักขระมีลักษณะดังนี้ สมมติให้ตัวแปร s มีอักขระอยู่ n ตัวและรูปแบบการเรียงของอักขระเป็น C1C2C3C4...Cn ดังนั้นผลลัพธ์ที่ได้จากถักจะมีลักษณะเป็น C1CnC2Cn-1C3Cn-2C4Cn-3...Cn-1C2CnC1

ตัวอย่างผลลัพธ์
String: hello, world
Output: hdellrloow,  ,woolrlledh
String: 12345
Output: 1524334251

[hide line #]
#include <stdio.h>

int charcount(char *s)
{
   
int len;
    for(len=0;s[len]!=0;len++);
    return len;

}

void charweave(char *s,char *result)
{
    int i, j=0, len;
    len = charcount(s)-1;
    
    for(i=0;s[i]!=0;i++){
        result[j++]=s[i];
        result[j++]=s[len--];
    }
    result[j]=0;
    

}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}