Polymorph Shape3D
จงเขียนโปรแกรมสำหรับคลาส Shape3D, RightRectangularPyramid และ Sphere ตามข้อกำหนดต่อไปนี้

(ทั้งสามคลาส จะต้องมีคุณสมบัติ polymorphic จึงจะผ่านโจทย์ข้อนี้)

คลาส Shape3D แทนคลาสของทรงสามมิติ ที่มี member function ได้แก่

volumn() เป็น member function ที่คืนค่าปริมาตรของทรงสามมิติ
surfaceArea() เป็น member function ที่คืนค่าพื้นที่ผิวทั้งหมดของทรงสามมิติ
คลาส Shape3D ไม่มี data member ใด ๆ และไม่มี constructor

จากนั้นใช้ Shape3D เป็น base class ของคลาส RightRectangularPyramid และคลาส Sphere

คลาส RightRectangularPyramid แทนคลาสของทรงพิระมิดตรงฐานสี่เหลี่ยมผืนผ้า

data member ประกอบด้วย

width คือ ความกว้างของฐานสี่เหลี่ยมผืนผ้า
length คือ ความยาวของฐานสี่เหลี่ยมผืนผ้า
height คือ ความสูงตรงของพิระมิดตรง
member function ประกอบด้วย

constructor สำหรับกำหนดค่า width, length และ height ตามลำดับ โดยมี default value เป็น 0 สำหรับแต่ละ parameter
volumn() และ surfaceArea() สืบทอดจากคลาส Shape3D แต่ override การคำนวณสำหรับทรงพิระมิดตรงฐานสี่เหลี่ยมผืนผ้า
คลาส Sphere แทนคลาสของทรงกลม

data member ประกอบด้วย

radius คือ ความยาวของรัศมีทรงกลม
member function ประกอบด้วย

constructor สำหรับกำหนดค่า radius
volumn() และ surfaceArea() สืบทอดจากคลาส Shape3D แต่ override การคำนวณสำหรับทรงกลม

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape3D
{
public:
	
virtual double volumn() = 0;

	
virtual double surfaceArea() = 0;

};

class RightRectangularPyramid : public Shape3D {
private:
    double width ;
    double length ;
    double height ;
public:
    RightRectangularPyramid(double width = 0,double length = 0,double height = 0)    
                            : width(width) ,length(length),height(height){}
    double volumn(){
        return (1.0/3.0)*width*length*height ;
    }

    double surfaceArea(){
        return (width*length)+length*sqrt(pow(width/2.0,2)+pow(height,2))
                +width*sqrt(pow(length/2.0,2)+pow(height,2));
    } 
};

class Sphere : public Shape3D {
private:
    double radius ;
public:
    Sphere(double radius = 0) : radius(radius) {}

    double volumn(){
        return 4/3.0 * M_PI * pow(radius,3);
    }
    double surfaceArea(){
        return 4* M_PI * pow(radius,2);
    }
};


int main()
{
	int tc;
	cin >> tc;
	if (tc == 1) {
		Shape3D **shapes = new Shape3D*[3];
		shapes[0] = new RightRectangularPyramid(1, 5.2, 7);
		shapes[1] = new Sphere(10.6);
		shapes[2] = new RightRectangularPyramid(3, 3.5, 4.13);
		for (int i = 0; i < 3; i++) {
			cout << "Volumn: " << (*shapes)->volumn() << endl;
			cout << "Surface Area: " << (*shapes)->surfaceArea() << endl;
			cout << "--------------------\n";
			*shapes++;
		}
	} else if (tc == 2) {
		RightRectangularPyramid rectangle;
		Sphere sphere;
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 3) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		cout << rectangle.volumn() << endl;
		cout << rectangle.surfaceArea() << endl;
	} else if (tc == 4) {
		Sphere sphere(34.25);
		cout << sphere.volumn() << endl;
		cout << sphere.surfaceArea() << endl;
	} else if (tc == 5) {
		RightRectangularPyramid rectangle(171.5, 45.33, 31.02);
		Sphere sphere(34.25);
		Shape3D *shape = &rectangle;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
		shape = &sphere;
		cout << shape->volumn() << " " << shape->surfaceArea() << endl;
	} else if(tc == 6) {
	}

}