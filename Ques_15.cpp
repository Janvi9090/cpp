#include<iostream>
using namespace std;
class Shape {
public:
virtual void display() {
cout<<"This is a shape"<<endl;
}
};
class Polygon : public Shape {
public:
void display() override {
cout<<"Polygon is a shape"<<endl;
}
};
class Rectangle : public Polygon {
public:
void display() override {
cout<<"Rectangle is a polygon"<<endl;
}
};
class Triangle : public Polygon {
public:
void display() override {
cout<<"Triangle is a polygon"<<endl;
}
};
class Square : public Rectangle {
public:
void display() override {
cout<<"Square is a rectangle"<<endl;
}
};
int main() {
Shape shapeObj;
Polygon polygonObj;
Rectangle rectangleObj;
Triangle triangleObj;
Square squareObj;
cout<<"--- Output ---"<<endl;

shapeObj.display();
polygonObj.display();
rectangleObj.display();
triangleObj.display();
squareObj.display();
return 0;
}