Submitted on 8:58 12 Feb 2024 || Result: PASSED [PPPPP] Explain results
เปลี่ยน String เป็นอักษรตัวใหญ่
ให้นิสิตเขียนฟังก์ชันชื่อ stoupper() ซึ่งจะรับสตริงมาหนึ่งตัว จากนั้นจะสร้างสตริงก์ใหม่ที่นำอักษรภาษาอังกฤษตัวเล็กจากสตริงก์เก่ามาเปลี่ยนเป็นอักษรตัวใหญ่ (Capital Letter) อักษรที่ไม่ใช่ตัวเล็กนั้นจะเหมือนเดิม จากนั้นจะรีเทิร์น pointer ไปที่สตริงใหม่นี้

นิสิตไม่สามารถใช้ฟังก์ชันใดใน string.h ได้ แต่สามารถใช้ฟังก์ชันใน ctype.h ได้ (เช่น toupper() เป็นต้น)

ตัวอย่าง 1
Hello,World
HELLO,WORLD
ตัวอย่าง 2
c3t-WiCoS
C3T-WICOS

[hide line #]
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char *
 stoupper(const
char s[]
) {
int i,j=0 , len;

    for(len=0;s[len]!=0;len++);

    char *result;
    result = (char*)malloc(len + 1);
    for(i=0;s[i]!=0;i++){
        result[j++]=toupper(s[i]);
    }
    return result;

}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
        if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}