Submitted on 18:10 07 Jan 2024 || Result: PASSED [PPPPPPPPPPPP] Explain results
แปลงเลขฐานสิบเป็นเลขฐานสอง (ขนาด 4 บิต)
ให้นิสิตเขียนโปรแกรมรับเลขจำนวนเต็มฐานสิบซึ่งมีค่าตั้งแต่ 0 ถึง 15 และแปลงค่าเป็นเลขฐานสองขนาด 4 บิต แล้วพิมพ์ออกมา

ให้นิสิตเขียนโปรแกรมโดยใช้ bitwise operator และไม่ใช้ if statement

ตัวอย่างข้อมูลส่งออก
7
Binary number of 7 is 0111.

[hide line #]
#include <stdio.h>
#include <stdlib.h>



int main(){
    char n_str[20] ;
    int n , n_b , i , b[4];
    fgets(n_str,sizeof(n_str),stdin);
    n = atoi(n_str);
    n_b = n;

    for ( i=3 ; i>=0 ; i-- ){
        b[i] = n_b%2;
        n_b = n_b>>1;
    }
    printf("Binary number of %d is %d%d%d%d.",n,b[0],b[1],b[2],b[3]);

}
