//
// Created by Mr.Yang on 2019-08-19.
//

#include <iostream>
#include <string>

using namespace std;

template<typename T>
inline T const &Max(T const &a, T const &b) {
    return a < b ? b : a;
}