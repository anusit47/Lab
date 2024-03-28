Submitted on 5:08 18 Dec 2023 || Result: PASSED [PPPPPPPPPPPPPPPPPPPPPPPP] Explain results
ร้านขายพิซซา
ให้ผู้เรียนเขียนโปรแกรมสำหรับร้านขายพิซซาซึ่งขายพิซซาสามขนาด ได้แก่ ขนาดเล็ก กลาง และใหญ่ ตามขนาดเส้นผ่านศูนย์กลาง (diameter) 10 (ขนาด s), 16 (ขนาด m), และ 20 (ขนาด l) นิ้ว ตามลำดับ โดยผู้ใช้สามารถเลือกเพิ่มเพิ่มเปปเปอโรนี (pepperoni) ชีส (cheese) และ/หรือเห็ด (mushroom) บนหน้าพิซซาได้ โดยทางร้านกำหนดราคาขาย (price) เป็น 1.5 เท่าของต้นทุน ดังสมการ \[ \mbox{price} = 1.5 \times \mbox{cost} \] โดยที่ต้นทุนของพิซซาแต่ละถาดจะคำนวณจากสูตร \[ \mbox{cost} = \mbox{fixedcost} + (\mbox{basecost} \times \mbox{area}) + (\mbox{extracost} \times \mbox{area}) \] ร้านได้กำหนดให้ fixedcost และ basecost มีค่าเท่ากับ 5 และ 2 บาทตามลำดับ ส่วนค่า extracost จะมีค่าเป็น 0 หากผู้ใช้ไม่ต้องการเพิ่มเครื่องปรุงอะไรเลย แต่การเลือกเพิ่มเครื่องปรุงแต่ละชนิดจะทำให้ extracost มีความเปลี่ยนแปลงดังต่อไปนี้

การเพิ่ม pepperoni จะทำให้ extracost เพิ่มขึ้น 0.5 บาท
การเพิ่ม cheese จะทำให้ extracost เพิ่มขึ้น 0.25 บาท
การเพิ่ม mushroom จะทำให้ extracost เพิ่มขึ้น 0.30 บาท
ส่วนค่า area นั้นจะคำนวนจากสูตร \[ area = \pi \times (\mbox{diameter})^2 / 4 \] ซึ่งเวลาเขียนโปรแกรมให้ส่ง #include \ แล้วใช้ค่าคงที่ M_PI แทนค่าพาย

ตัวอย่างผลลัพธ์ที่ 1
Welcome to My Pizza Shop!!
~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter pizza size (1=s, 2=m, or 3=l): 2
Extra pepperoni? (1=yes, 0=no): 1
Extra cheese? (1=yes, 0=no): 0
Extra mushroom? (1=yes, 0=no): 0
~~~~~~~~~~~~~~~~~~~~~~~~~~
Your order costs 761.48 baht.
Thank you.
ตัวอย่างผลลัพธ์ที่ 2
Welcome to My Pizza Shop!!
~~~~~~~~~~~~~~~~~~~~~~~~~~
Enter pizza size (1=s, 2=m, or 3=l): 1
Extra pepperoni? (1=yes, 0=no): 0
Extra cheese? (1=yes, 0=no): 1
Extra mushroom? (1=yes, 0=no): 0
~~~~~~~~~~~~~~~~~~~~~~~~~~
Your order costs 272.57 baht.
Thank you.

[hide line #]
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char size_str[5] ,pepperoni_str[5],cheese_str[5],mushroom_str[5];
    int size, diameter, pepperoni, cheese, mushroom;
    double fixedcost=5, basecost=2, extracost=0, price, cost, area;

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size_str,5,stdin);
    size = atoi(size_str);
    if (size==1){
        diameter = 10;
    } else if (size==2){
        diameter = 16;
    } else if (size==3){
        diameter = 20;
    }
    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(pepperoni_str,5,stdin);
    pepperoni = atoi(pepperoni_str);
    if (pepperoni){
        extracost += 0.5;
    }
    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(cheese_str,5,stdin);
    cheese = atoi(cheese_str);
    if (cheese){
        extracost += 0.25;
    }
    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(mushroom_str,5,stdin);
    mushroom = atoi(mushroom_str);
    if (mushroom){
        extracost += 0.30;
    }

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    area = M_PI*diameter*diameter/4.0;

    cost = fixedcost + (basecost*area) + (extracost*area);

    price = 1.5 * cost;

    printf("Your order costs %.2f baht.\n",price);
    printf("Thank you.\n");

}
