/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char firstName[100];
    char lastName[100];

    printf("First Name: ");
    scanf("%s", firstName);

    printf("Last Name: ");
    scanf("%s", lastName);

    // กำหนดรหัสสำหรับคณะ และสถานที่
    char facultyCode[] = "TC";
    char university[] = "RMUTL";
    char location[] = "Chiang Mai, Thailand";

    // แปลงตัวหนังสือแรกของนามสกุลให้เป็นตัวพิมพ์ใหญ่
    lastName[0] = toupper(lastName[0]);

    // แปลงตัวหนังสือทั้งหมดของชื่อและนามสกุลให้เป็นตัวพิมพ์เล็ก
    for (int i = 0; i < strlen(firstName); i++) {
        firstName[i] = tolower(firstName[i]);
    }
    for (int i = 0; i < strlen(lastName); i++) {
        lastName[i] = tolower(lastName[i]);
    }

    // พิมพ์ชื่อและนามสกุลพร้อมกับข้อมูลอื่น ๆ
    printf("%s %s %s, %s, %s", firstName, lastName, facultyCode, university, location);

    return 0;
}
