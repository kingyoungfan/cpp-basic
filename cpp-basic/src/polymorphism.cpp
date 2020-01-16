//
// Created by Mr.Yang on 2019-08-19.
//

#include <iostream>

using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int w = 0, int h = 0) {
        width = w;
        Shape::height = h;
    }

    // 虚函数
    virtual int area() {
        cout << "Parent class area: " << endl;
        return 0;
    }
};

class Rectangle : public Shape {
public :
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {

    }

    int area() {
        int area = width * height;
        cout << "Rectangle class area: " << area << endl;
        return area;
    }
};

class Triangle : public Shape {
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {

    }

    int area() {
        int area = width * height / 2;
        cout << "Triangle class area: " << area << endl;
        return area;
    }
};

void ploy() {
    // 指针变量
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // 存储矩形的地址
    shape = &rec;
    // 调用矩形的求面积公式
    shape->area();

    // 存储三角形的地址
    shape = &tri;
    shape->area();

}