#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;

    }

    Rectangle(float l, float b){
        length=l;
        breadth=b;
    }
    Rectangle(float side){
        length=side;
        breadth=side;
    }
    void calculateArea(){
        float area=length*breadth;
        cout<<"Area of reactangle: "<<area<<endl;

    }
};
int main(){

    Rectangle a;
    Rectangle b(5.0,3.0);
    Rectangle c(4.0);
    a.calculateArea();
    b.calculateArea();
    c.calculateArea();
    return 0;
    
}