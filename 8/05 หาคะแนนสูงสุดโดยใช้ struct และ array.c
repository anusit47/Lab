หาค่าสูงสุดของคะแนนโดยเก็บข้อมูลใน struct
จงเขียนโปรแกรมหาค่าสูงสุด โดยให้นิยาม data type ใหม่ เป็นประเภท struct และสร้าง array ของ struct นี้ขึ้นมาโดยมีขนาด 5 elements รับข้อมูลเข้าจากผู้ใช้ โดยจะมีข้อมูล ID ของนิสิต คะแนนสอบมิดเทอมและไฟนอล จากนั้นให้เรียกฟังก์ชัน findTop ซึ่งจะหา record ที่มีคะแนนมิดเทอมสูงสุด และ record ที่มีคะแนนไฟนอลสูงสุด

จากนั้นให้พิมพ์ ID และคะแนนของนิสิตที่ได้คะแนนสูงสุดทั้งสอง ถ้านิสิตสองคนมีคะแนนเท่ากัน ให้ยึดนิสิตคนที่ผู้ใช้ใส่ข้อมูลก่อนว่าเป็นผู้ที่มีคะแนนสูงสุด

ตัวอย่างผลลัพธ์ที่ 1
Enter Student ID: 501456784
Enter Student Midterm: 26
Enter Student Final: 37
Enter Student ID: 501769821
Enter Student Midterm: 40
Enter Student Final: 37
Enter Student ID: 501567893
Enter Student Midterm: 10
Enter Student Final: 6
Enter Student ID: 501875947
Enter Student Midterm: 26
Enter Student Final: 35
Enter Student ID: 519838273
Enter Student Midterm: 30
Enter Student Final: 25
Top Score for Midterm:
Student ID 501769821 with score 40
Top Score for Final:
Student ID 501456784 with score 37

[hide line #]
#include <stdio.h>

#define ARRAY_SIZE 5
typedef struct
 {
  char id[12];
  int midterm;
  int final;
  char grade;
}
StudentRecord;


void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin) {

  
*topMid = &pRec[0];
    *topFin = &pRec[0];
    int topmid = pRec[0].midterm;
    int topfin = pRec[0].final;

    for (int i=0;i<size;i++){
        if(pRec[i].midterm > topmid){
            topmid=pRec[i].midterm;
            *topMid=&pRec[i];
        }
        if(pRec[i].final > topfin){
            topfin=pRec[i].final;
            *topFin=&pRec[i];
        }
    }

}

int main() {

  StudentRecord students[ARRAY_SIZE], *pTopMid, *pTopFin;
  int gradeCount[5] = {0};
  int i;

  for (i=0; i <  ARRAY_SIZE; i++) {
    printf("Enter Student ID: ");
    scanf("%s", students[i].id);
    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);
    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);

  }

  findTop(
students,ARRAY_SIZE,&pTopMid,&pTopFin
);

  //print grade
  printf("Top Score for Midterm:\n");
  printf("Student ID %s with score %d\n",
pTopMid->id,pTopMid->midterm
);
  printf("Top Score for Final:\n");
  printf("Student ID %s with score %d\n",
pTopFin->id,pTopFin->final
);


  return 0;
}
