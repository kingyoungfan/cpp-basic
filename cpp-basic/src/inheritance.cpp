//
// Created by Mr.Yang on 2019-08-19.
// c++ 继承
#include <iostream>

using namespace std;

// 基类
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

private :
    int width;
    int height;
};

class PaintCost {
public:
    static int getCost(int area) {
        return area * 70;
    }
};

// 派生类
class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return getWidth() * getHeight();
    }
};

int area(int width, int height) {
    Rectangle rectangle{};
    rectangle.setWidth(width);
    rectangle.setHeight(height);
    cout << "面积：" << rectangle.getArea() << endl;
    cout << "总花费：" << Rectangle::getCost(rectangle.getArea()) << endl;
    return 0;
}