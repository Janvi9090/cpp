#include<iostream>
using namespace std;
class Employee {
private:
int age;
int yearsOfService;
double salary;
public:
Employee(int a, int y, double s) : age(a), yearsOfService(y), salary(s) {}

int getAge() const { return age; }
int getYearsOfService() const { return yearsOfService; }
double getSalary() const { return salary; }

int salaryInThousands() const {
return salary/1000;
}
};
int main() {
Employee emp1(30, 5, 45000);
Employee emp2(45, 20, 78000);

cout<<"Employee 1:\n";
cout<<"Age: "<<emp1.getAge()<<endl;
cout<<"Years of service: "<<emp1.getYearsOfService()<<endl;
cout<<"Salary:$ "<<emp1.getSalary()<<endl;
cout<<"Salary in thousands:$ "<<emp1.salaryInThousands()<<endl;

cout<<"Employee 2:"<<endl;
cout<<"Age: "<<emp2.getAge()<<endl;
cout<<"Years of service: "<<emp2.getYearsOfService()<<endl;
cout<<"Salary:$ "<<emp2.getSalary()<<endl;
cout<<"Salary in thousand:$ "<<emp2.salaryInThousands()<<endl;

return 0;
}