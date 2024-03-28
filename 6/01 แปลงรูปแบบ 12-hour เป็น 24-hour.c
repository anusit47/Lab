Submitted on 17:16 13 Jan 2024 || Result: PASSED [PPPPPPP] Explain results
แปลงรูปแบบ 12-hour เป็น 24-hour
จงเขียนโปรแกรมที่รับเวลาในรูปแบบ 12-hour (เช่น 12:59 pm โดยคำว่า am/pm เป็น upper/lower case ก็ได้) แล้วแสดงผลลัพธ์เป็นเวลาเดียวกันในรูปแบบ 24-hour ดังตัวอย่าง

ตัวอย่างผลลัพธ์ที่ 1
Enter a 12-hour time [eg. 12:34 am]: 11:11 PM
Equivalent 24-hour time: 23:11
ตัวอย่างผลลัพธ์ที่ 2
Enter a 12-hour time [eg. 12:34 am]: 1:23 am
Equivalent 24-hour time: 01:23
ตัวอย่างผลลัพธ์ที่ 3
Enter a 12-hour time [eg. 12:34 am]: 12:00 am
Equivalent 24-hour time: 00:00
ตัวอย่างผลลัพธ์ที่ 4
Enter a 12-hour time [eg. 12:34 am]: 12:05 PM
Equivalent 24-hour time: 12:05

[hide line #]
#include <stdio.h>
#include <ctype.h>

void convertTo24HourFormat(int *hour, int *minute, char *period);

int main() {
    int hour, minute;
    char period[3], p;

    printf("Enter a 12-hour time [eg. 12:34 am]: ");
    scanf("%d:%d %2s", &hour, &minute, period);

    convertTo24HourFormat(&hour, &minute, period);

    printf("Equivalent 24-hour time: %02d:%02d\n", hour, minute);

    return 0;
}

void convertTo24HourFormat(int *hour, int *minute, char *period) {
    char p = toupper(period[0]);

    if ((p == 'P' && *hour != 12) || (p == 'A' && *hour == 12)) {
        *hour = (*hour + 12) % 24;
    }
}

