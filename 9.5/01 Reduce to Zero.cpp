ให้เขียนโปรแกรมภาษา C++ เพื่อรับจำนวนเต็มบวกจำนวนหนึ่ง แล้วหาว่าจะต้องใช้กี่ขั้นตอนเพื่อจะลดจำนวนดังกล่าวให้เหลือศูนย์

โดยมีกฎการลดจำนวนในแต่ละขั้นตอนคือ ถ้าจำนวนดังกล่าวเป็นจำนวนคู่ ให้หารจำนวนดังกล่าวด้วย 2 แต่ถ้าไม่ใช่จำนวนคู่ให้หักออก 1 จากจำนวนดังกล่าว

ตัวอย่างข้อมูลเข้า/ข้อมูลออก
14
6
อธิบาย
14 เป็นจำนวนคู่ ให้หารด้วย 2 เหลือ 7
7 เป็นจำนวนคี่ ให้หักออก 1 เหลือ 6
6 เป็นจำนวนคู่ ให้หารด้วย 2 เหลือ 3
3 เป็นจำนวนคี่ ให้หักออก 1 เหลือ 2
2 เป็นจำนวนคู่ ให้หารด้วย 2 เหลือ 1
1 เป็นจำนวนคี่ ให้หักออก 1 เหลือ 0 สิ้นสุดการทำงาน ใช้ทั้งหมด 6 ขั้นตอน

[hide line #]
#include <iostream>
using namespace std;

int main() {
int num , count=0 ;
    cin >> num;

    while(num>0){
        if(num%2==0){
            num/=2;
        }
        else {
            num-=1;
        }
        count++;
    }
    cout << count << endl;
    return 0;

}