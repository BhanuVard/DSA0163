#include <iostream>
using namespace std;

class person {
public:
    virtual void work() {
       cout<<"a";
    }
};

class employee : public person {
public:
     void work() {
        cout << "b";
    }
};

class manager : public person {
public:
     void work() {
        cout <<" c";
    }
};

int main() {
    person P;
    employee E;
    manager M;
    
    person* P1=&P;
    person* P2=&E;
    person* P3=&M;
    
    
    P1->work();
    P2->work();
    P3->work();
}
