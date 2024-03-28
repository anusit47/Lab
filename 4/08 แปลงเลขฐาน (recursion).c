Submitted on 7:10 08 Jan 2024 || Result: PASSED [PPPPP] Explain results
แปลงเลขฐาน (recursion)
ให้เขียนโปรแกรม เพื่อแปลงเลขฐานสิบ เป็นเลขฐานสอง โดยใช้ Recursion

ตัวอย่าง
10
1010
123
1111011

[hide line #]
#include <stdio.h>
#include <stdlib.h>

int bit(int n){
    if (n > 0) {
        bit(n/2);
        printf("%d", n % 2);
    }
}

int main(){
    char n_str[20] ;
    int n ;
    fgets(n_str,sizeof(n_str),stdin);
    n = atoi(n_str);

    if (n==0){
        printf("%d",n);
    } else {
        bit(n);
    }
}
