//
// Created by Mr.Yang on 2019-08-17.
//

#include <iostream>

using namespace std;

extern int a, b;
extern int c;
extern float f;

int vt() {
    int a, b;
    int c;
    float f;

    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl;

    return 0;
}