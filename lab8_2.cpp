#include <iostream>

using namespace std;

int main () {

        char name[] = {"kanjana"};
        int nameLength = 6;
        cout << name << endl;
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
        cout << nom <<endl;

        nom[0] = nom[0] + 1;
        nom[1] = nom[1] + 1;
        nom[2] = nom[2] + 1;
        nom[3] = nom[3] + 1;
        nom[4] = nom[4] + 1;
        nom[5] = nom[5] + 1;
        nom[6] = nom[6] + 1;
        cout << nom <<endl;

        return 0;
}
