#include<iostream>
using namespace std;

class vehicle {
public:
    virtual void drive() {
        cout<<"This is a vehicle."<<endl;
    }
};

class car : public vehicle {
public:
    void drive() {
        cout<<"This is a car."<<endl;
    }
};

class truck: public vehicle {
public:
    void drive() {
        cout<<"This is a truck."<<endl;
    }
};

int main() {
    vehicle V;
    car C;
    truck T;

    vehicle *V1 = &V;
    vehicle *V2 = &C;
    vehicle *V3 = &T;

    V1->drive(); 
    V2->drive();  
    V3->drive(); 
    return 0;
};
    
