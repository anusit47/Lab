ถ้ากำหนดให้เวกเตอร์ \(\vec{u} = (u_x,u_y,u_z)\) และเวกเตอร์ \(\vec{v} = (v_x,v_y,v_z)\), ค่า cross product ระหว่างเวกเตอร์ \(\vec{u}\) และเวกเตอร์ \(\vec{v}\), ซึ่งสามารถเขียนอยู่ในรูปของ \(\vec{u}\times\vec{v}\), จะมีค่าเป็นเวกเตอร์ซึ่งมีค่าเท่ากับ:

\[\vec{u} \times \vec{v} = (u_yv_z - u_zv_y, u_zv_x - u_xv_z, u_xv_y - u_yv_x)\]
จงเติมโปรแกรมข้างล่างให้สมบูรณ์เพื่อคำนวณหาค่า cross product ระหว่าง 2 เวกเตอร์ที่รับค่าเข้ามา

ตัวอย่างผลลัพธ์ที่ 1
Enter u: 1 2 3
Enter v: 2 3 4
u x v = -1.0 2.0 -1.0
ตัวอย่างผลลัพธ์ที่ 2
Enter u: 1.0 2.5 3.5
Enter v: 0.0 0.0 1.0
u x v = 2.5 -1.0 0.0

[hide line #]
#include <stdio.h>

struct vector {
  
float x , y , z ;

};

int main()
{
  
printf("Enter u: ");
    struct vector u;
    scanf("%f %f %f",&u.x ,&u.y, &u.z);

    printf("Enter v: ");
    struct vector v;
    scanf("%f %f %f",&v.x ,&v.y, &v.z);

    struct vector uv = {u.y*v.z-u.z*v.y,
                        u.z*v.x-u.x*v.z,
                        u.x*v.y-u.y*v.x};
    printf("u x v = %.1f %.1f %.1f",uv.x,uv.y,uv.z);


  return 0;
}