#include<iostream>
using namespace std;
class Fruit {
protected:
int totalFruits;
public:
Fruit() {
totalFruits = 0;
}
void addFruits(int count) {
totalFruits += count;
}
void displayTotalFruits() {
cout<<"Total number of fruits in the basket: "<<totalFruits<< endl;
}
};
class Apples : public Fruit {
private:
int numApples;
public:
Apples(int count) {
numApples = count;
addFruits(count);
}
void displayApples() {
cout<<"Number of apples in the basket: "<<numApples<<endl;
}
};
class Mangoes : public Fruit {
private:
int numMangoes;
public:
Mangoes(int count) {
numMangoes = count;
addFruits(count);
}
void displayMangoes() {
cout<<"Number of mangoes in the basket: "<<numMangoes<<endl;
}
};
int main() {
Apples apples(5);
Mangoes mangoes(3);
apples.displayApples();
mangoes.displayMangoes();
int total = 5 + 3;
cout<<"Total number of fruits in the basket: "<<total<<endl;
return 0;
}