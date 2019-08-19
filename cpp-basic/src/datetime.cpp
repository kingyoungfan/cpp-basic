//
// Created by Mr.Yang on 2019-08-19.
//
#include <iostream>
#include <ctime>

using namespace std;

int time() {
    time_t now = time(nullptr);

    char *dt = ctime(&now);
    cout << "本地日期和时间： " << dt << endl;

    // 把now转化为tm结构
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC时间和日期：" << dt << endl;
    return 0;
}
