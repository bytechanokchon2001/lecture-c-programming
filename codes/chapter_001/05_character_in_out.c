#include <stdio.h>

void inputAndOutput() {
    int c;

    // อ่านค่า เก็บเข้า c แล้วเช็คทันทีว่าใช่ EOF ไหม
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}

// นับตัวอักษรจาก input
void characterCounting() 
{
    long nc;                    // number of character จัดเก็บจำนวนของตัวอักษร

    nc = 0;                     // initialize: ระบุค่าเริ่มต้นให้กับตัวแปร
    while (getchar() != EOF)    // รับตัวอักษรทีละตัว และตราบใดที่ตัวอักษรไม่ใช่ EOF ลูปจะทำงานต่อไป
    {
        ++nc;                   // เป็นตัวดำเนินการ Increment ซึ่งหมายถึง nc = nc + 1 เป็นการเพิ่มค่าขึ้นทีละ 1 ในทุกๆ รอบที่ลูปทำงาน
    }
    printf("%ld\n", nc);        // แสดงผลค่า nc ออกมาทางหน้าจอ โดยใช้ Format Specifier เป็น %ld เพื่อบอกว่าต้องการพิมพ์ตัวแปรประเภท long
}

void lineCounting() 
{
    /*
        c ใช้เก็บตัวอักษรที่ได้รับจาก input
        nl ใช้เก็บจำนวน new line ที่ได้รับ
    */
    int c, nl;

    nl = 0; // ระบุข้อมูลข้อมูลเริ่มต้นให้กับตัวแปร 
    while ((c = getchar()) != EOF) // ลูปรับข้อมูลไปเรื่อย ๆ จนกว่าจะได้รับ EOF (Ctrl + Z + Enter)
    {
        if (c == "\n") // ตรวจสอบว่าข้อมูลที่รับเข้ามา เป็นการสั่งให้ขึ้นบรรทัดใหม่หรือไม่
        {
            ++nl; // ถ้าเงื่อนไขใน if เป็นจริง (เจอตัวขึ้นบรรทัดใหม่) โปรแกรมจะเพิ่มค่า nl ขึ้น 1
        }
    }
    printf("%d\n", nl); // เมื่อออกจากลูป (เจอ EOF) โปรแกรมจะพิมพ์จำนวนบรรทัดทั้งหมดที่นับได้ออกมา
}

int main()
{
    // inputAndOutput();
    // characterCounting();
    lineCounting();

    return 0;
}