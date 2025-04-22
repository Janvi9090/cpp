#include<iostream>
using namespace std;
class Vehicle {
    protected:
        float mileage;
        float price;
    public:
        void setVehicleInfo(float m, float p)
        {
        mileage = m;
        price = p;
    }
    void displayVehicleInfo() {
        cout<<"Mileage:"<<mileage <<"km/l"<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
    class Car : public Vehicle {
        protected:
            float ownershipCost;
            int warranty;
            int seatingCapacity;
            string fuelType;
        public:
            void setCarInfo(float cost, int w, int seat, string fuel) {
            ownershipCost = cost;
            warranty = w;
            seatingCapacity = seat;
            fuelType = fuel;
        }
    void displayCarInfo() {
        cout<<"Ownership Cost: "<<ownershipCost<<endl;
        cout<<"Warranty: "<<warranty<<"years"<<endl;
        cout<<"Seating Capacity: "<<seatingCapacity<<endl;
        cout<<"Fuel type: "<<fuelType<<endl;
    }   

};
    class Bike : public Vehicle {
protected:
int cylinders;
int gears;
string coolingType;
string wheelType;
float fuelTankSize;
public:
void setBikeInfo(int cyl, int gear, string cooling, string wheel, float tank) {

cylinders = cyl;
gears = gear;
coolingType = cooling;
wheelType = wheel;
fuelTankSize = tank;
}
void displayBikeInfo() {
cout<<"Cylinders: "<<cylinders<<endl;
cout<<"Gerars: "<<gears<<endl;
cout<<"Cooling Type: "<<coolingType<<endl;
cout<<"Wheel Type: "<<wheelType<<endl;
cout<<"Fuel Tank Size: "<<fuelTankSize<<" inches"<<endl;

}
};
class Audi : public Car {
private:
string modelType;
public:
void setModelType(string model) {
modelType = model;
}
void displayAudiInfo() {
cout<<"-----Audi CAr info-----"<<endl;
cout<<"Model Type: "<<modelType<<endl;

displayCarInfo();
displayVehicleInfo();
cout<<endl;
}
};
class Ford : public Car {
private:
string modelType;
public:
void setModelType(string model) {
modelType = model;
}
void displayFordInfo() {
cout<<"-----Ford Car Info-----"<<endl;
cout<<"Model Type: "<<modelType<<endl;
displayCarInfo();
displayVehicleInfo();
cout<<endl;
}
};
class Bajaj : public Bike {
private:
string makeType;
public:
void setMakeType(string make) {
makeType = make;
}

void displayBajajInfo() {
cout<<"-----Bajaj Bike Info-----"<<endl;
cout<<"Make Type: "<<makeType<<endl;

displayBikeInfo();
displayVehicleInfo();
cout<<endl;
}
};
class TVS : public Bike {
private:
string makeType;
public:
void setMakeType(string make) {
makeType = make;
}
void displayTVSInfo() {
cout<<"-----TVS Bike Info-----"<<endl;
cout<<"Make Type: "<<makeType<<endl;

displayBikeInfo();
displayVehicleInfo();
cout<<endl;
}
};
int main() {
Audi audi;
audi.setModelType("A6");
audi.setCarInfo(50000, 4, 5,"Petrol");
audi.setVehicleInfo(15.5, 55000);
audi.displayAudiInfo();
Ford ford;
ford.setModelType("Mustang");
ford.setCarInfo(60000, 3, 4,"Diesel");
ford.setVehicleInfo(12.0, 62000);
ford.displayFordInfo();
Bajaj bajaj;
bajaj.setMakeType("Pulsar 220F");
bajaj.setBikeInfo(1, 5, "Air", "Alloys", 15.0);
bajaj.setVehicleInfo(40.0, 1200);
bajaj.displayBajajInfo();
TVS tvs;
tvs.setMakeType("Apache RTR 160");
tvs.setBikeInfo(1, 5,"Oil", "Spokes", 12.0);
tvs.setVehicleInfo(45.0, 1100);
tvs.displayTVSInfo();
return 0;
}