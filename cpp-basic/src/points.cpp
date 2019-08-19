//
// Created by Mr.Yang on 2019-08-19.
//
#include <iostream>
#include "points.h"

using namespace std;

int point() {
    int var = 20;
    int *ip;
    ip = &var;

    cout << "value of var variable: ";
    cout << var << endl;

    cout << "address stored in ip variable: ";
    cout << ip << endl;

    // 访问指针中指针的地址

    cout << "Value of *ip variable: ";
    cout << *ip << endl;

    cout << &var << endl;

    return 0;
}