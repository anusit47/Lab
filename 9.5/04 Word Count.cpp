Word Count (C++)

จงเขียนโปรแกรมภาษา C++ ในการนับจำนวนคำที่ได้รับมาจากผู้ใช้งาน โดยผู้ใช้งานจะป้อนคำเข้ามาในระบบเรื่อย ๆ
โปรแกรมสามารถบันทึกข้อมูลจำนวนคำที่ไม่ซ้ำกันได้ไม่เกิน 20 คำ (array data) และแต่ละคำ (word) มีความยาวไม่เกิน 20 ตัวอักษร
เมื่อผู้ใช้งานป้อนคำเข้าไปในระบบจนพอใจแล้วให้ หยุดโปรแกรมโดยการพิมพ์คำว่า exit
โปรแกรมจะหยุดทำงานพร้อมกับพิมพ์คำ (word) และจำนวนคำ (count) ที่ได้รับเข้ามาในระบบ

ตัวอย่าง 1

This
Is
BOOK
Book
Hello
Hello
Hello
exit
Output:
This = 1
Is = 1
BOOK = 1
Book = 1
Hello = 3
ตัวอย่าง 2

one
one
one
exit
Output:
one = 3

[hide line #]
#include <iostream>
using namespace std;

typedef struct Word_ {
    
    string word;
    int count;

} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        
        for (i=0 ; i<last_word+1 ; i++){
            if (input == data[i].word ){
                find = 1;
                break;
            }
        }
        if(find){
            data[i].count += 1;
            find = 0;
        }
        else {
            data[last_word].word = input;
            data[last_word].count = 1;
            last_word++;
        }


    }

    cout << "Output:" << endl;
    
for (i=0 ; i<last_word ; i++){
        cout << data[i].word << " = " << data[i].count << endl;
    }


    return 0;
}