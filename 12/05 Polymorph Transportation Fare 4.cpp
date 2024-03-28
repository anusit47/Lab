Transportation Fare part 4
คลาส Transportation เป็นคลาสแทนการใช้บริการรถโดยสารชนิดต่าง ๆ มีพฤติกรรม

fare() คืนค่า ค่าใช้จ่ายในการใช้บริการรถโดยสารชนิดต่าง ๆ
คลาส Taxi เป็นคลาสแทนการใช้บริการรถแท็กซี่ ซึ่งสืบทอดจากคลาส Transportation และให้มีสมบัติ polymorphism

การคำนวณค่าใช้จ่ายในการใช้บริการรถแท็กซี่ จะเริ่มต้นที่ 35 บาท และเพิ่มขึ้นตามระยะทางกิโลเมตรละ 2 บาท

Taxi มี method setDistance(double) ที่รับระยะทางหน่วยกิโลเมตร
และมี method fare() ที่คืนค่า ค่าใช้จ่ายในการใช้บริการรถแท็กซี่

คลาส BmtaBus เป็นคลาสแทนการใช้บริการรถขสมก. ซึ่งสืบทอดจากคลาส Transportation และให้มีสมบัติ polymorphism

การคำนวณค่าใช้จ่ายในการใช้บริการรถขสมก. ครั้งละ 6.50 บาท ผ่าน method fare()

คลาส BTS เป็นคลาสแทนการใช้บริการรถไฟฟ้าบีทีเอส ซึ่งสืบทอดจากคลาส Transportation และให้มีสมบัติ polymorphism

การคำนวณค่าใช้จ่ายในการใช้บริการรถไฟฟ้าบีทีเอส จะเริ่มต้นที่ 15 บาท และเพิ่มขึ้นตามจำนวนสถานี สถานีละ 5 บาท

คลาส BTS มี method setStation(int) ที่รับจำนวนสถานีที่จะโดยสารไป
และมี method fare() ที่คืนค่า ค่าใช้จ่ายในการใช้บริการรถไฟฟ้าบีทีเอส

คลาส Passenger แทนคลาสของผู้โดยสาร มี method ดังนี้

void addTransportation(Transportation &) ผู้โดยสารเลือกใช้บริการรถโดยสารแบบใดก็ได้จาก รถแท็กซี่ รถขสมก. หรือรถบีทีเอส และคำนวณค่าใช้จ่ายรวมในการโดยสารรถทุกแบบ
double getTotalFare() คืนค่า ค่าใช้จ่ายรวมในการโดยสารรถทุกแบบ
จงเขียนโปรแกรมเพื่อคำนวณค่าใช้จ่ายในการเดินทางของผู้โดยสารคนหนึ่ง โดยรับข้อมูลการใช้บริการแบบต่าง ๆ ดังนี้

A แทนการเดินทางด้วยรถแท็กซี่ และรับระยะทางที่โดยสารด้วยรถแท็กซี่ครั้งนั้น
B แทนการเดินทางด้วยรถขสมก.
C แทนการเดินทางด้วยรถไฟฟ้าบีทีเอส และรับจำนวนสถานีที่โดยสารด้วยรถไฟฟ้าบีทีเอสครั้งนั้น
การโดยสารรูปแบบอื่นถือว่าสิ้นสุดการเดินทาง เมื่อสิ้นสุดการเดินทางให้แสดงผลรวมของค่าโดยสารทั้งหมด

[hide line #]
#include <iostream>
using namespace std;

class Transportation
{
public:
    
 fare() = 0;
};

class Taxi

{

};

class BmtaBus

{

};

class BTS

{

};

class Passenger
{

};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            

        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            

        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}