#include <iostream>
using namespace std;

int main () {
        // สร้างตัวแปร array ชื่อ calendar เพื่อสร้างที่เก็บปฏิทิน
        // calendar[5][7]
        int calendar[6][7];
        // เขียนโปรแกรมแสดงปฏิทินเดือน ธันวาคม /2560
        // วันที่ไม่ใช่วันของเดือน ธันวาคมให้แสดงด้วย x
        calendar[0][0] = 0;
        calendar[0][1] = 0;
        calendar[0][2] = 0;
        calendar[0][3] = 0;
        calendar[0][4] = 0;
        calendar[0][5] = 1;
        calendar[0][6] = 2;
        calendar[1][0] = 3;
        calendar[1][1] = 4;
        calendar[1][2] = 5;
        calendar[1][3] = 6;
        calendar[1][4] = 7;
        calendar[1][5] = 8;
        calendar[1][6] = 9;
        calendar[2][0] = 10;
        calendar[2][1] = 11;
        calendar[2][2] = 12;
        calendar[2][3] = 13;
        calendar[2][4] = 14;
        calendar[2][5] = 15;
        calendar[2][6] = 16;
        calendar[3][0] = 17;
        calendar[3][1] = 18;
        calendar[3][2] = 19;
        calendar[3][3] = 20;
        calendar[3][4] = 21;
        calendar[3][5] = 22;
        calendar[3][6] = 23;
        calendar[4][0] = 24;
        calendar[4][1] = 25;
        calendar[4][2] = 26;
        calendar[4][3] = 27;
        calendar[4][4] = 28;
        calendar[4][5] = 29;
        calendar[4][6] = 30;
        calendar[5][0] = 31;
        // เขียนโปรแกรมเพื่อรับวันจากผู้ใช้ แล้วแสดงเฉพาะวันที่นั้น
        // 0 = อาทิตย์, 1 = จันทร์ ... 7 = เสาร์
        int nom;
        int nam;

        for (nom = 0; nom < 6; nom++) {
            for (nam = 0; nam < 7; nam++) {
                cout << calendar[nom][nam] << "  ";
            }
        }

        // เขียนโปรแกรมเพื่อรับสัปดาห์ของเดือนจากผู้ใช้ เขียนโปรแกรมเพื่อคัด เฉพาะวันของสัปดาห์
        // 1 หมายถึง สัปดาห์ที่ 1 ของเดือนธันวาคม 2560 จะได้เลข {1, 2}


        return 0;
}
