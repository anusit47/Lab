Submitted on 13:15 12 Feb 2024 || Result: PASSED [PPPPPP] Explain results
กำหนดโครงสร้างข้อมูล struct
ให้กำหนดโครงสร้างข้อมูล struct ที่ใช้เก็บข้อมูลเกี่ยวกับโทรศัพท์มือถือ ซึ่งมีชื่อฟิลด์และรายละเอียดข้อมูลด้งต่อไปนี้:

name - ชื่อเจ้าของโทรศัพท์ ซึ่งมีชนิดข้อมูลเป็นอะเรย์ของตัวอักษรจำนวนไม่เกิน 40 ตัว
brand - ยี่ห้อของโทรศัพท์ ซึ่งมีชนิดข้อมูลเป็นอะเรย์ของตัวอักษรจำนวนไม่เกิน 20 ตัว
calls - จำนวนครั้งที่เคยโทรออก
price - ราคาของโทรศัพท์ที่ยังไม่รวมภาษีมูลค่าเพิ่ม
vat - ภาษีมูลค่าเพิ่ม
ให้กำหนดโครงสร้างนี้ในบริเวณที่เว้นไว้ให้


[hide line #]
struct cellphone {
  
char name[40];
    char brand[20];
    int calls;
    float price;
    float vat;

};