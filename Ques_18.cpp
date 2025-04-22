#include<iostream>
using namespace std;
class Student {
private:
string name;
public:
Student() {
name = "Unknown";
}
Student(string studentName) {
name = studentName;
}
void display() {
cout<<"Student Name: "<<name<<endl;
}
};
int main() {
Student student1;
Student student2("Lalit Prabhakar");
student1.display();
student2.display();
return 0;
}