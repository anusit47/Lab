Submitted on 2:58 13 Jan 2024 || Result: PASSED [PPPPPP] Explain results
พิมพ์สามเหลี่ยมไปทางขวาด้วยอักขระ 2 ตัว
จงเขียนโปรแกรมเพื่อรับจํานวนเต็มบวกมาหนึ่งจํานวน และพิมพ์สามเหลี่ยมตามขนาดที่ผู้ใช้กําหนดดังตัวอย่างด้านล่าง

ตัวอย่าง Input/Output 1
Enter n: 1
-
ตัวอย่าง Input/Output 2
Enter n: 2
-
-x
- 
ตัวอย่าง Input/Output 3
Enter n: 10
-
-x
-x-
-x-x
-x-x-
-x-x-x
-x-x-x-
-x-x-x-x
-x-x-x-x-
-x-x-x-x-x
-x-x-x-x-
-x-x-x-x
-x-x-x-
-x-x-x
-x-x-
-x-x
-x-
-x
-
ตัวอย่าง Input/Output 4
Enter n: 11
-
-x
-x-
-x-x
-x-x-
-x-x-x
-x-x-x-
-x-x-x-x
-x-x-x-x-
-x-x-x-x-x
-x-x-x-x-x-
-x-x-x-x-x
-x-x-x-x-
-x-x-x-x
-x-x-x-
-x-x-x
-x-x-
-x-x
-x-
-x
-

[hide line #]
#include <stdio.h>

int main(){
    int n , i , j , odd;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        odd = 1;
        for(j=0;j<=i;j++){
            if(odd){
                printf("-");
                odd = 0;
            } else {
                printf("x");
                odd = 1;
            }
            
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--){
        odd = 1;
        for(j=0;j<=i;j++){
            if(odd){
                printf("-");
                odd = 0;
            } else {
                printf("x");
                odd = 1;
            }
            
        }
        printf("\n");
    }
}
