//
// Created by Mr.Yang on 2019-08-19.
//
#include <iostream>

using namespace std;

int ref() {
    int i;
    double d;

    int &r = i;
    double &s = d;

    i = 5;
    cout << "Value of i: " << i << endl;
    cout << "Value of i reference: " << r << endl;
    i = 6;
    cout << "Value of i: " << i << endl;
    cout << "Value of i reference: " << r << endl;


    return 0;
}