#include <stdio.h>

int main() {
    int start, stop;

    // รับค่าจากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter stop number: ");
    scanf("%d", &stop);

    // แสดงค่าที่รับมา
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("--------------------\n");
    printf("ลำดับตัวเลข จากค่าเริ่มต้น เพิ่มทีละ 1 ไปถึงค่าสุดท้าย ในบรรทัดเดียวกัน\n");
    printf("Sequence from start to stop: ");

    // แสดงลำดับตัวเลข
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }
    printf("\nThank you.\n");

    // อธิบาย: โปรแกรมนี้รับค่าเริ่มต้นและค่าสุดท้ายจากผู้ใช้ แล้วใช้ for loop แสดงลำดับตัวเลขจากค่าเริ่มต้นถึงค่าสุดท้าย

    return 0;
}