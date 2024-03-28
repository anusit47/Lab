Submitted on 4:51 08 Jan 2024 || Result: PASSED [PPPP] Explain results
พิมพ์สี่เหลี่ยมขนมเปียกปูน
เขียนโปรแกรมภาษาซี ที่รับเลขจำนวนเต็ม 2 จำนวน เช่น x กับ y (โดย x และ y มีค่าอย่างต่ำเป็น 4) แล้วแสดงสี่เหลี่ยมขนมเปียกปูนที่ยาว x และสูง y ที่มีลักษณะเอียงตามรูป ตัวอย่างเช่น

ตัวอย่างผลลัพธ์ที่ 1
6
4
******
 *    *
  *    *
   ******
ตัวอย่างผลลัพธ์ที่ 2
20
6
********************
 *                  *
  *                  *
   *                  *
    *                  *
     ********************
พิมพ์โปรแกรมของคุณลงในช่องว่างข้างล่างนี้


[hide line #]
#include <stdio.h>
#include <stdlib.h>

void top(int x){
    char line[x+1];
    int i;
    for (i=0;i<x;i++){
        line[i] = '*';
    }
    line[x] = '\0';
    printf("%s\n",line);
}

void down(int x,int y){
    char line[x+1] , space[y] ;
    int i;
    for (i=0;i<x;i++){
        line[i] = '*';
    }
    for (i=0;i<y-1;i++){
        space[i] = ' ';
    }
    line[x] = '\0';
    space[y-1] = '\0';
    printf("%s%s",space,line);
}

void mid(int x,int sp){
    char front[sp+1] , space[x-2+1] ;
    int i;
    for (i=0;i<sp;i++){
        front[i] = ' ';
    }
    for (i=0;i<(x-2);i++){
        space[i] = ' ';
    }
    front[sp] = '\0';
    space[x-2] = '\0';
    printf("%s*%s*\n",front,space);
}

int main(){
    char x_str[20] , y_str[20];
    fgets(x_str, 20, stdin);
    fgets(y_str, 20, stdin);
    int x, y ,i;
    x = atoi(x_str);
    y = atoi(y_str);

    top(x);

    for (i=1;i<y-1;i++){
        mid(x,i);
    }

    down(x,y);

}
