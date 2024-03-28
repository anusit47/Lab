Submitted on 22:53 13 Jan 2024 || Result: PASSED [PPPPPP] Explain results
ให้เขียนโปรแกรมจำลองการไต่ขั้นบันได โดยเริ่มแรก โปรแกรมจะถามจำนวนขั้นบันได (บรรทัดที 1)
จากนั้น ในแต่ละรอบ โปรแกรมจะแสดงตำแหน่งปัจจุบันของคนบนขั้นบันได และโปรแกรมจะถาม step command

step command สำหรับโปรแกรมนี้ คือ

ถ้าเป็นจำนวนเต็มบวก x หมายถึง ให้ไต่บันไดขึ้นไป x ขั้น
ถ้าเป็นจำนวนเต็มลบ -x หมายถึง ให้ไต่บันไดลงมา x ขั้น
ถ้าเป็นจำนวนเต็มศูนย์ หมายถึง จบโปรแกรม
เงื่อนไขเพิ่มเติมของโปรแกรมนี้ คือ

คน ประกอบด้วย 2 ส่วน คือ ส่วนหัว (O) และส่วนขา (^)
รอบที่หนึ่ง ขาของคนจะอยู่ที่ขั้นบันไดล่างสุด
ขาของคนจะไม่อยู่ต่ำกว่าบันไดขั้นล่างสุด และหัวของคนจะไม่อยู่สูงกว่าบันไดขั้นบนสุด
Sample Output 1
Input number of stairs: 4
---- round 1 ----
|---|
|---|
|-O-|
|-^-|
Input step command: 1
---- round 2 ----
|---|
|-O-|
|-^-|
|---|
Input step command: 0
Sample Output 2
Input number of stairs: 4
---- round 1 ----
|---|
|---|
|-O-|
|-^-|
Input step command: 2
---- round 2 ----
|-O-|
|-^-|
|---|
|---|
Input step command: 2
---- round 3 ----
|-O-|
|-^-|
|---|
|---|
Input step command: 0
Sample Output 3
Input number of stairs: 4
---- round 1 ----
|---|
|---|
|-O-|
|-∧-|
Input step command: 2
---- round 2 ----
|-O-|
|-∧-|
|---|
|---|
Input step command: -1
---- round 3 ----
|---|
|-O-|
|-∧-|
|---|
Input step command: -2
---- round 4 ----
|---|
|---|
|-O-|
|-∧-|
Input step command: -1
---- round 5 ----
|---|
|---|
|-O-|
|-∧-|
Input step command: 0

[hide line #]
#include <stdio.h>

int main() {
    int n , round=1  ,step=1;

    printf("Input number of stairs: ");
    scanf("%d",&n);

    int head_pos=n-2 ,body_pos=n-1;
    char stairs[n];

    while(step){
        printf("---- round %d ----\n",round);
        for (int i=0; i < n; i++){
            stairs[i] = '-';
        }
        stairs[head_pos] = 'O';
        stairs[body_pos] = '^';

        for (int i=0; i < n; i++){
            printf("|-%c-|\n",stairs[i]);
        }

        printf("Input step command: ");
        scanf("%d",&step);

        if (step>0){
            head_pos -= step;
            body_pos -= step;
            if (head_pos<0){
                head_pos=0;
                body_pos=1;
            }
        } else if (step<0) {
            head_pos -= step;
            body_pos -= step;
            if (body_pos>n-1){
                head_pos=n-2;
                body_pos=n-1;
            }
        }
        round++;
    }
}

