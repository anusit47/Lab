Submitted on 2:56 04 Mar 2024 || Result: PASSED [PPPPPPPP] Explain results
กำหนดโครงสร้างข้อมูล enum
ให้กำหนดโครงสร้างข้อมูล enum ที่มีชื่อว่า DaysOfWeek เพื่อใช้เก็บค่าวันในสัปดาห์ตั้งแต่วันจันทร์ถึงวันอาทิตย์ โดยให้ใช้ตัวอักษรย่อว่า MON, TUE, WED, THU, FRI, SAT, และ SUN ตามลำดับ นอกจากนี้ ให้มีการกำหนดลำดับของวันดังต่อไปนี้

วันที่ถัดจากวันอาทิตย์ออกไป 1 วันคือวันจันทร์ และวันที่ถัดจากวันจันทร์ออกไปอีก 1 วันคือวันอังคาร และถัดแบบนี้ไปเรื่อยๆ จนถึงวันที่ถัดจากวันศุกร์ออกไปอีก 1 วันคือวันเสาร์ (ส่วนวันที่ถัดจากวันเสาร์ออกไปนั้น นักเรียนไม่ต้องสนใจ)
ให้กำหนดโครงสร้างนี้ในบริเวณที่เว้นไว้ให้ เพื่อให้โปรแกรมทำงานถูกต้อง ตัวอย่างของผลลัพธ์ได้แสดงไว้ข้างล่างนี้

ตัวอย่างผลลัพธ์
The day after Monday is Tuesday
Two days after Monday is Wednesday

[hide line #]
#include <stdio.h>
#include <string.h>

enum DaysOfWeek {
    SUN = 3, MON, TUE, WED, THU, FRI, SAT
};


int main()
{  char day_names[][10]={"", "", "",
                        "Sunday", "Monday", "Tuesday",
                        "Wednesday", "Thursday", "Friday",
                        "Saturday"};
   enum DaysOfWeek today;

[hide line #]
   today = MON;
   printf("The day after %s is %s\n", day_names[today], day_names[today+1]);
   printf("Two days after %s is %s\n", day_names[today], day_names[today+2]);
}