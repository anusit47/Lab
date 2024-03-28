Time
Implement a class Time with three attributes: hour, minute, second. All of them are integer.

Write mutator (set) and accessor (get) methods of these attributes. The constructors and other methods are listed below.

Time(int hour, int minute, int second)	Construct and initialize Time object
Time(int duration)	Construct and initialize Time object. The duration parameter has second unit
int	getDuration()	return duration in seconds
Time	add(Time other)	return Time that is the result of adding this Time and other Time together
int	subtract(Time other)	return duration in seconds between this Time and other Time
int	equals(Time other)	return 1 if this Time and other Time are the same; otherwise, return 0
string	toString()	return String of hour:minute:second, e.g., "09:08:04"
Note that
Example of subtract the time :
( a ) -> 02:02:02
( b ) -> 01:01:01
(a) - (b) => 3661 sec.
(b) - (a) => 82739 sec.

ในข้อนี้ให้ใช้ stringstream จาก library sstream มาช่วย

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour ;
    int minute ;
    int second ;

public:
    Time(int hour, int minute, int second) 
        : hour(hour) , minute(minute) , second(second) {}

    Time(int duration) {
        duration = duration%86400 ;
        this->second = duration%60 ;
        this->minute = (duration/60)%60 ;
        this->hour = duration/3600 ;
    }

    void setHour(int hour){
        this->hour = hour ;
    }
    void setMinute(int minute){
        this->minute = minute ;
    }
    void setSecond(int second){
        this->second = second ;
    }
    int getHour(){
        return hour;
    }
    int getMinute(){
        return minute;
    }

    int getSecond(){
        return second;
    }
    int getDuration(){
        return hour*3600+minute*60+second;
    }

    Time add(Time other){
        return Time(this->getDuration() + other.getDuration());
    }

    int	subtract(Time other){
        return ((this->getDuration()>=other.getDuration())
                    ? this->getDuration()-other.getDuration() 
                    : (86400-other.getDuration())+this->getDuration() );
    }

    int	equals(Time other){
        return (this->getDuration()==other.getDuration())? 1 : 0 ;
    }

    string toString(){
        stringstream ss ;
        ss << setfill('0') << setw(2) << hour << ":" 
            << setfill('0') << setw(2) << minute << ":"
            << setfill('0') << setw(2) << second;
        return ss.str();
    }

};


int main()
{
   // implement program to test class Time
}
