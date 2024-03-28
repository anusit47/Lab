Submitted on 7:42 12 Feb 2024 || Result: PASSED [PPPPP] Explain results View compiler messages
จงเขียนฟังก์ชัน stringcat เพื่อคัดลอกสายอักขระที่เก็บอยู่ในตัวแปร src ไปเพิ่มต่อท้ายข้อมูลที่มีอยู่ในตัวแปร dest

ตัวอย่างผลลัพธ์
Input 1: hello
Input 2: world
 Output: worldhello
Input 1: 12345 67890
Input 2: abcdefghijk
 Output: abcdefghijk12345 67890

[hide line #]
void stringcat(char src[], char dest[])
{
int i,j;
    for(i=0;dest[i]!=0;i++);
    for(j=0;src[j]!=0;j++){
        dest[i++]=src[j];
        // printf("%c%c--",dest[i],src[j]);
    }

}
ฟังก์ชันดังกล่าวจะถูกเรียกใช้ดังลักษณะด้านล่างนี้


[hide line #]
int main()
{
  char in1[100],in2[100];

  printf("Input 1: ");
  gets(in1);  /* read a line of characters from the input to "in1" variable */
  printf("Input 2: ");
  gets(in2);  /* read another line of characters from the input to "in2" variable */
  stringcat(in1,in2);
  printf(" Output: ");
  printf("%s\n",in2);
  return 0;
}