เปลี่ยนเลขโรมันให้เป็นเลขอารบิก
จงเขียนฟังก์ชันเพื่อเปลี่ยนเลขโรมันที่มีค่าอยู่ในช่วงเพียง 1 ถึง 9 (ซึ่งก็คือ I,II,III,IV,V,VI,VII,VIII,IX ตามลำดับ) ทั้งหมดที่ปรากฏในสตริงที่รับผ่านฟังก์ชันเข้ามา ให้กลายเป็นเลขอารบิก 1 หลัก แล้วบันทึกผลที่ได้ลงในตัวแปรอีกตัวที่ถูกส่งเข้ามาด้วยในฟังก์ชัน

ตัวอย่างผลลัพธ์
 Input: There are III eggs on the table.
Output: There are 3 eggs on the table.
 Input: II + III = V
Output: 2 + 3 = 5

[hide line #]
#include <stdio.h>

[hide line #]
void roman2arabic(char input[],char output[])
{
int i,j=0 ;

    for(i=0;input[i]!=0;i++){
        if(input[i]=='I'){
            if(input[i+1]=='I'){
                if(input[i+2]=='I'){
                    output[j++]='3';
                    i+=2;
                } 
                else {
                    output[j++]='2';
                    i+=1;
                }
            } 
            else if (input[i+1]=='V'){
                output[j++]='4';
                i+=1;
            }
            else if (input[i+1]=='X'){
                output[j++]='9';
                i+=1;
            }
            else {
                output[j++]='1';
            }
        }
        else if(input[i]=='V'){
            if(input[i+1]=='I'){
                if(input[i+2]=='I'){
                    if(input[i+3]=='I'){
                        output[j++]='8';
                        i+=3;
                    }
                    else{
                        output[j++]='7';
                        i+=2;
                    }
                }
                else{
                    output[j++]='6';
                    i+=1;
                }
            }
            else {
                output[j++]='5';
            }
        }
        else{
            output[j++]=input[i];
        }
    }
    output[j]=0;

}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}