#include <iostream>

using namespace std;

int main () {

        char name[] = {"kanjana"};
        int nameLength = 6;
        cout << name;
        char nom[8];
        // TODO: เขียนโปรแกรมเพื่อสลับชื่อ
        // hint : สร้าง array มารับค่าตัวอักษรแบบย้อนกลับ สามารถใช้ loop เข้ามาช่วยได้
        nom[0] = name[6];
        nom[1] = name[5];
        nom[2] = name[4];
        nom[3] = name[3];
        nom[4] = name[2];
        nom[5] = name[1];
        nom[6] = name[0];
        nom[7] = '\0';
        cout << nom;

        return 0;
}
