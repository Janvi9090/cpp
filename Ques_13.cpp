#include<iostream>
#include<vector>
using namespace std;
int rollCounter = 1;
class Marks {
protected:
int rollNo;
string name;
public:
Marks(string studentName) {
rollNo = rollCounter++;
name = studentName;
}
int getRollNo() {
return rollNo;
}
string getName() {
return name;
}
};
class Physics : virtual public Marks {
protected:
int physicsMarks;
public:
Physics(string studentName, int marks) : Marks(studentName) {
physicsMarks = marks;
}
int getPhysicsMarks() {
return physicsMarks;
}
};
class Chemistry : virtual public Marks {
protected:
int chemistryMarks;
public:
Chemistry(string studentName, int marks) : Marks(studentName) {
chemistryMarks = marks;
}
int getChemistryMarks() {

return chemistryMarks;
}
};
class Mathematics : public Physics, public Chemistry {
private:
int mathMarks;
public:
Mathematics(string studentName, int phy, int chem, int math) : Marks(studentName), Physics(studentName, phy), Chemistry(studentName, chem) {
mathMarks = math;
}
void display() {
int total = physicsMarks + chemistryMarks + mathMarks;
cout<<"Roll No: "<<rollNo<<", Name: "<<name<<endl;
cout<<"Physics: "<<physicsMarks<<", Chemistry: "<<chemistryMarks<<", Mathematics: "<<mathMarks<<endl;
cout<<"Total Marks: "<<total<<endl;
}
int getTotalMarks() {
return physicsMarks + chemistryMarks + mathMarks;
}
};
int main() {
int n;
cout<<"Enter number of students: ";
cin>>n;
vector<Mathematics>students;
int totalClassMarks = 0;
for (int i = 0; i<n; ++i) {
string name;
int phy, chem, math;
cout<<"Enter name of student "<<i + 1<<": ";
cin>>name;
cout<<"Enter marks in Physics, Chemistry, Mathematics: ";
cin>>phy>>chem>>math;
Mathematics student(name, phy, chem, math);
students.push_back(student);
totalClassMarks += student.getTotalMarks();
}
cout<<"\n--- Student Details ---\n";
for (auto& s : students) {
s.display();
}

float avg = (float)totalClassMarks / n;
cout<<"Average marks of the class: "<<avg<<endl;
return 0;
}