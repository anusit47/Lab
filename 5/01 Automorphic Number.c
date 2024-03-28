Submitted on 14:46 08 Jan 2024 || Result: PASSED [PPPPPPPPP] Explain results
Automorphic numbers

Automorphic numbers คือตัวเลขใด ๆ ที่เมื่อนำมายกกำลังสองแล้วยังคงได้ตัวเลขที่ลงท้ายด้วยตัวเลขที่เอามายกกำลัง

ตัวอย่างเช่น \[ 1^2 = 1\]

\[ 5^2 = 25\]

\[ 6^2 =36\]

\[ 25^2 = 625\]

\[ 76^2 = 5776 \]

จากตัวอย่างข้างต้นจะได้ว่า 1, 5, 6, 25 และ 76 ต่างก็เป็น Automorphic numbers

จงเขียนโปรแกรมที่รับค่า input เป็นเลขจำนวนเต็มบวกใด ๆ โดยโปรแกรมจะทำการตรวจสอบว่าตัวเลขดังกว่าเป็น Automorphic numbers หรือไม่ดังตัวอย่าง

หมายเหตุ input ในชุดทดสอบ มีค่าไม่เกิน 100,000,000

sample output
Input n = 25
n^2 = 625
Yes. 25 is automorphic number.
sample output2
Input n = 13
n^2 = 169
No. 13 is not automorphic number.
โปรแกรมที่เขียนได้คือ


[hide line #]
#include <stdio.h>
#include <math.h>


int automorphic(unsigned long long n,unsigned long long pow2){
    unsigned long long n_check , digit=1;
    
    for (n_check = n;n_check>0;n_check/=10){
        digit *= 10;
    }

    if (pow2%digit==n){
        return 1;
    } else {
        return 0;
    }

}

int main(){
    unsigned long long pow2 , n;

    printf("Input n = ");
    scanf("%llu",&n);

    pow2 = n*n;

    printf("n^2 = %llu\n",pow2);

    if (automorphic(n,pow2)){
        printf("Yes. %llu is automorphic number.",n);
    } else {
        printf("No. %llu is not automorphic number.",n);
    }





}

