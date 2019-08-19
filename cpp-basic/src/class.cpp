//
// Created by Mr.Yang on 2019-08-19.
//
#include <iostream>

using namespace std;

class Box {
public :
    double length;
    double breadth;
    double height;

    // 成员函数定义
    double getVolume() {
        return length * breadth * height;
    }

    // 成员函数声明
    void setLength(double len);

    void setWidth(double wid);

    double getWidth();

private:
    double width;
};


// ::  是范围解析运算符
void Box::setLength(double len) {
    length = len;
}

void Box::setWidth(double wid) {
    width = wid;
}

double Box::getWidth() {
    return width;
}

int box() {
    Box box1{};
    Box box2{};

    box1.height = 5.0;
    box1.breadth = 6;
    box1.length = 7;

    box2.height = 10.0;
    box2.breadth = 10;
    box2.setLength(10);

    double volume = box1.length * box1.breadth * box1.height;
    cout << "box1的体积：" << volume << endl;
    cout << "box1的体积：" << box2.getVolume() << endl;

    box1.setWidth(12);
    cout << "box1的宽度是：" << box1.getWidth() << endl;
    return 0;
}