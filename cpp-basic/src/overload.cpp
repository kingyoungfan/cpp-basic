//
// Created by Mr.Yang on 2019-08-19.
//

#include <iostream>

using namespace std;

class PrintData {
public:
    void static print(int i) {
        cout << "整数为：" << i << endl;
    }

    void static print(double f) {
        cout << "浮点数为：" << f << endl;
    }

    void static print(char c[]) {
        cout << "浮点数为：" << c << endl;
    }
};


class Box {
public:
    /**
     * 运算符重载重载，用于把两个box对象相加
     * @param b
     * @return
     */
    Box operator+(const Box &b) {
        Box box{};
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }

    /**
     * 求体积
     * @return 体积
     */
    double getVolume() {
        return length * breadth * height;
    }

    double getLength() const {
        return length;
    }

    void setLength(double len) {
        this->length = len;
    }

    double getBreadth() const {
        return breadth;
    }

    void setBreadth(double bre) {
        Box::breadth = bre;
    }

    double getHeight() const {
        return height;
    }

    void setHeight(double hei) {
        Box::height = hei;
    }

private:
    double length;
    double breadth;
    double height;
};

void print() {
    PrintData::print(5);
    PrintData::print(3245.34);
    char c[] = "hello C++";
    PrintData::print(c);
}

void area() {
    Box box1{}, box2{}, box3{};
    box1.setHeight(5);
    box1.setLength(6);
    box1.setBreadth(34);

    box2.setLength(54);
    box2.setHeight(344);
    box2.setBreadth(9);

    cout << "Volume box1: " << box1.getVolume() << endl;
    cout << "Volume box2: " << box2.getVolume() << endl;

    cout << "Volume box3: " << (box1 + box2).getVolume() << endl;
}