Submitted on 3:02 18 Dec 2023 || Result: PASSED [PPPPPPPPPP] Explain results
คุณได้รับเลือกให้เป็นสารวัตรนักเรียนที่ต้องทำหน้าที่ตรวจตราโรงเรียน โดยโรงเรียนของคุณมีระเบียบว่า "การที่นักเรียนชั้นมัธยมต้นจะขอจองห้องซ้อมดนตรีได้หรือไม่นั้น จะขึ้นอยู่กับว่านักเรียนได้เรียนรู้ดนตรีมามากกว่า 3 ปีหรือไม่ สำหรับนักเรียนที่อยู่ชั้นมัธยมปลายจะจองห้องซ้อมได้เลย ยกเว้นแต่ว่าจะไม่เคยเรียนดนตรีมาเลย" จงเขียนโปรแกรมเพื่อตรวจสอบว่า นักเรียนคนนี้สามารถขอจองห้องซ้อมดนตรีได้หรือไม่

จงเติมส่วนของโปรแกรมที่ทำให้โปรแกรมนี้ทำงานได้ถูกต้อง โดย level เป็นชั้นปีมัธยมของนักเรียนซึ่งมีค่าระหว่าง 1 ถึง 6 เท่านั้น และ year เป็นจำนวนปีที่นักเรียนได้เรียนดนตรีมาซึ่งมีค่าระหว่าง 0 ถึง 12


[hide line #]
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char level_str[4], year_str[4];
  int level, year;

  printf("school level of student: ");
  fgets(level_str, 4, stdin);

  printf("how many of learning: ");
  fgets(year_str, 4, stdin);

  level = atoi(level_str);
  year = atoi(year_str);

  if (
year > 3 || (level > 3 && year > 0)
) {
     printf("YES");
  }
  else {
     printf("NO");
  }
  return 0;
}