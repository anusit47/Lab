Submitted on 4:07 04 Mar 2024 || Result: PASSED [PPPPPPP] Explain results
หาวันในสัปดาห์
ให้นิสิตกำหนด enum ของ DayOfWeek และเขียนฟังก์ชันชื่อ findDayOfWeek() เพื่อหาวันของสัปดาห์จากวันและเดือน (เป็นตัวเลข) ของปีพ.ศ. 2556 ที่ผู้ใช้พิมพ์เข้ามา สังเกตว่าวันที่ 1 เดือน 1 ของปีพ.ศ. 2556 นั้นเป็นวันอังคาร

ตัวอย่าง
Day:1 Month:1 of Year 2013 is Tuesday.
Enter Day and Month: 26 7
Day:26 Month:7 of Year 2013 is Friday.

[hide line #]
#include <stdio.h>

typedef enum{     MON, TUE, WED, THU, FRI, SAT, SUN,   }DayOfWeek;


DayOfWeek findDayOfWeek(int day, int month) {
int months[12] = {0,31,28,31,30,31,30,31,31,30,31,30};
    int total = 0;
    for(int i=0 ; i<month ; i++){
        total += months[i];}
    total += day;
    // printf("%d\n",total);

    DayOfWeek out = MON;
    for(int i=0 ; i<total ; i++){
        out = (out+1)%7;
    }

    return out;

}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case
SUN
: printf("Sunday.\n"); break;
		case
MON
: printf("Monday.\n"); break;
		case
TUE
: printf("Tuesday.\n"); break;
		case
WED
: printf("Wednesday.\n"); break;
		case
THU
: printf("Thursday.\n"); break;
		case
FRI
: printf("Friday.\n"); break;
		case
SAT
: printf("Saturday.\n"); break;
	}
}