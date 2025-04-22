#include<iostream>
using namespace std;
class Mammals {
public:
    void mammalInfo() {
    cout<<"I am mammal"<<endl;
}
};
class MarineAnimals {
    public:
void marineAnimalInfo() {
cout<<"I am a marine animal"<<endl;
}
};
class BlueWhale : public Mammals, public MarineAnimals {
public:
void blueWhaleInfo() {
cout<<"I belong to both the categories: Mammals as well as Marine Animals"<<endl;
}
};
int main() {
// 1. Object of Mammals and call its function
Mammals mammal;
mammal.mammalInfo();
MarineAnimals marine;
marine.marineAnimalInfo();
BlueWhale blueWhale;
blueWhale.blueWhaleInfo();
blueWhale.mammalInfo();
blueWhale.marineAnimalInfo();
return 0;
}