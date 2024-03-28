// Submitted on 11:38 19 Feb 2024 || Result: PASSED [PPPPPPPP] Explain results View compiler messages
// ถ้ากำหนดให้ C เป็นจำนวนเชิงซ้อนแล้ว C สามารถถูกเขียนให้อยู่ในรูปของ \(C = a + bi\) โดยที่ \(i^2 = -1\) และหากกำหนดให้ \(D = c + di\) แล้ว

// ผลบวกระหว่าง \(C\) และ \(D\) จะมีค่าเท่ากับ \((a+c) + (b+d)i\)
// ผลคูณระหว่าง \(C\) และ \(D\) จะมีค่าเท่ากับ \((ac-bd) + (ad+bc)i\)
// จงเติมโปรแกรมข้างล่างให้สมบูรณ์เพื่อคำนวณหาค่าผลบวก (add) และผลคูณ (multiply) ของค่าจำนวนเชิงซ้อน 2 จำนวนที่รับค่าเข้ามา

// ตัวอย่างผลลัพธ์ที่ 1 (Input: C = 1.0 + 2.0i และ D = 2 + 3i)

// Enter C: 1.0 2.0 
// Enter D: 2 3 
// C + D = 3.0 + 5.0i
// C x D = -4.0 + 7.0i
// ตัวอย่างผลลัพธ์ที่ 2 (Input: C = 2i และ D = 3i)
// Enter C: 0 2 
// Enter D: 0 3 
// C + D = 5.0i
// C x D = -6.0
// ตัวอย่างผลลัพธ์ที่ 3 (Input: C = 1 + 2i และ D = -3i)
// Enter C: 1 2 
// Enter D: 0 -3 
// C + D = 1.0 - 1.0i
// C x D = 6.0 - 3.0i

// [hide line #]
#include <stdio.h>

struct complex {
  
    float a,b;

};

struct complex
 add_complex(
struct complex first ,struct complex sec
)
{
struct complex add;
    add.a = first.a+sec.a;
    add.b = first.b+sec.b;
    return add;

}

struct complex
 multiply_complex(
struct complex first ,struct complex sec
)
{
struct complex mul;
    mul.a = first.a*sec.a-first.b*sec.b;
    mul.b = first.a*sec.b+first.b*sec.a;
    return mul;

}

void print_complex(
char str[],struct complex out
)
{
if (out.b==0){
        printf("%s%.1f\n",str,out.a);
    }
    else if (out.a==0){
        printf("%s%.1fi\n",str,out.b);
    }
    else if (out.b>0) {
        printf("%s%.1f + %.1fi\n",str,out.a,out.b);
    }
    else if (out.b<0) { 
        out.b *= -1;
        printf("%s%.1f - %.1fi\n",str,out.a,out.b);
    }
    else {
        printf("%s%.1f\n",str,0);
    }

}

int main()
{
  
struct complex C,D,E,F;


  printf("Enter C: ");
  scanf("%f %f", &C.
a
, &C.
b
);
  
printf("Enter D: ");
    scanf("%f %f", &D.a, &D.b);


  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}