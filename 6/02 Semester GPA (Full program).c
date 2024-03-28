Submitted on 4:56 13 Jan 2024 || Result: PASSED [PPPPP] Explain results View compiler messages
เขียนโปรแกรมภาษาซี เพื่อคำนวณ GPA ในภาคการศึกษาหนึ่ง ของนิสิตหนึ่งคน โดยกำหนดให้ รับจำนวนวิชาที่เรียนทั้งหมดในภาคการศึกษาก่อน (จำนวนวิชาอย่างน้อย 1 วิชา) แล้วจึงรับ จำนวนหน่วยกิต และเกรด (เกรดที่โปรแกรมยอมรับ คือ A,a,B,b,C,c,D,d,F และ f เท่านั้น) ของแต่ละวิชา ในรูปแบบ credit,grade ให้ครบตามจำนวนวิชา แสดงผลดังรูปแบบในตัวอย่าง

ให้น้ำหนักของเกรด A, B, C, D, F เป็น 4, 3, 2, 1, 0 ตามลำดับ

ตัวอย่างที่ 1

Enter number of subject(s): 1
Enter credit,grade for subject #1: 4,b
GPA = 3.00
ตัวอย่างที่ 2

Enter number of subject(s): 8
Enter credit,grade for subject #1: 3,b
Enter credit,grade for subject #2: 3,b
Enter credit,grade for subject #3: 4,a
Enter credit,grade for subject #4: 3,a
Enter credit,grade for subject #5: 3,b
Enter credit,grade for subject #6: 3,A
Enter credit,grade for subject #7: 1,A
Enter credit,grade for subject #8: 1,a
GPA = 3.57

[hide line #]
#include <stdio.h>

float calculateGPA(int credits[], char grades[], int numSubjects) {
    float totalGradePoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < numSubjects; ++i) {
        int gradeWeight;
        switch (toupper(grades[i])) {
            case 'A':
                gradeWeight = 4;
                break;
            case 'B':
                gradeWeight = 3;
                break;
            case 'C':
                gradeWeight = 2;
                break;
            case 'D':
                gradeWeight = 1;
                break;
            case 'F':
                gradeWeight = 0;
                break;
            default:
                gradeWeight = 0; 
        }

        totalGradePoints += gradeWeight * credits[i];
        totalCredits += credits[i];
    }

    return totalGradePoints / totalCredits;
}

int main() {
    int numSubjects;

    printf("Enter number of subject(s): ");
    scanf("%d", &numSubjects);

    int credits[numSubjects];
    char grades[numSubjects];

    for (int i = 0; i < numSubjects; ++i) {
        printf("Enter credit,grade for subject #%d: ", i + 1);
        scanf("%d,%c", &credits[i], &grades[i]);
    }

    float gpa = calculateGPA(credits, grades, numSubjects);
    printf("GPA = %.2f\n", gpa);
}

