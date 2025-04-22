#include<iostream>
using namespace std;
class SimpleCircle {
    private:
        int itsRadius;
        public:
            SimpleCircle() {
                itsRadius = 5;
                cout <<"Default constructor called\n";
            }
            SimpleCircle(int r) {
                itsRadius = r;
                cout<<"Parameterized constructor called\n";
            }
            SimpleCircle(const SimpleCircle& other) {
                itsRadius = other.itsRadius;
                cout<<"Copy constructor called\n";
            }

                SimpleCircle& operator=(const SimpleCircle& other) {
                cout<<"Assignment operator called\n";
                if(this != &other) {
                itsRadius = other.itsRadius;
                }
                return *this;
                }
                    SimpleCircle& operator++() {
                    ++itsRadius;
                return *this;
                }
                SimpleCircle operator++(int) {
                SimpleCircle temp = *this;
                itsRadius++;
                return temp;
                }
                    ~SimpleCircle(){
                    cout<<"Destructor called \n";
                    }
                        int getRadius() const {
                        return itsRadius;
                        }
};

int main() {
    SimpleCircle circle1;
    SimpleCircle circle2(9);
    ++circle1;
    circle2++;
    cout<<"Circle1 radius: "<<circle1.getRadius()<<endl;
    cout<<"Circle2 radius: "<<circle2.getRadius()<<endl;
    circle1 = circle2;
    cout<<"After assignment, circle1 radius: "<<circle1.getRadius()<<endl;

return 0;
}