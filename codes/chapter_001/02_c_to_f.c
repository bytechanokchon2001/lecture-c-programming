#include <stdio.h>

/*
    แสดงตารางการแปรงอุณหภูมิจาก ฟาเรนไฮต์ เป็น เซลเซียส 
    ตั้งแต่ 0F ถึง 300F
*/
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;      // อุณหภูมิต่ำสุด
    upper = 300;    // อุณหภูมิสูงสุด
    step = 20;      // จำนวนอุณหภูมิที่เพิ่มต่อครั้ง

    fahr = lower;

    printf("TABLE A");
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr = 0;
    printf("TABLE B");
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}