// Submitted on 7:30 12 Feb 2024 || Result: PASSED [PPPPPPPP] Explain results
// ลบสระออกจากสายอักขระ
// จงเขียนฟังก์ชันเพื่อลบสระที่ปรากฏในสายอักขระที่ส่งผ่านฟังก์ชันเข้ามาออกให้หมด

// ตัวอย่างผลลัพธ์ 1
//  Input: hello, world
// Output: hll, wrld
// ตัวอย่างผลลัพธ์ 2
//  Input: abcdef 123456
// Output: bcdf 123456

// [hide line #]
#include <stdio.h>

int remove_vowel(
char *str
)
{
    char output[100];
    int i , j=0;
    for(i = 0;str[i]!=0;i++)
    {
        if (str[i]!='a' && str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u' &&str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
            {
                str[j++]=str[i];
            }
    }
    for(j;str[j]!=0;j++)
        str[j]=0;

}

int main()
{  char str[80];

  printf(" Input: ");
  fgets(str, 80, stdin);

  remove_vowel(str);
  printf("Output: %s\n",str);

  return 0;
}