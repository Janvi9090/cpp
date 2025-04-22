#include<iostream>
using namespace std;

class DB;

class DM {
int meters;
int centimeters;

public:
DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}
friend DM addDistances(const DM&, const DB&);
void display() {
cout<<meters<<" meters and "<<centimeters<<" centimeters"<<endl;

}
};

class DB {
int feet;
int inches;

public:
DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}
friend DM addDistances(const DM&, const DB&);
void display() {
cout<<feet<<"feet and"<<inches<<"inches"<<endl;
}
};
DM addDistances(const DM& dm, const DB& db) {
int totalInches = db.feet * 12 + db.inches;
int totalCentimeters = totalInches * 2.54;
int meters = totalCentimeters / 100;
int centimeters = totalCentimeters % 100;
meters += dm.meters;
centimeters += dm.centimeters;
if (centimeters >= 100) {
meters += centimeters / 100;
centimeters = centimeters % 100;
}
return DM(meters, centimeters);
}
int main() {

int meters, centimeters;
cout<<"Enter distance in DM (meters and centimeters): ";
cin>>meters>>centimeters;
DM dm(meters, centimeters);
int feet, inches;
cout<<"Enter distance in DB (feet and inches): ";
cin>>feet>>inches;
DB db(feet, inches);
DM result = addDistances(dm, db);
cout<<"The result in meters and centimeters: ";
result.display();

return 0;
}