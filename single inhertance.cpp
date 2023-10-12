#include <iostream>
using namespace std;

class person
{
    char name[10];
    int age;
    char gender[10];

public:
    void read()
    {
        cout<<"Enter name,age,gender: ";
        cin>>name>>age>>gender;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: " <<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

class fitness : public person
{
    float weight;
    float height;

public:
    void read()
    {
        person::read(); 
        cout<<"Enter weight and height: ";
        cin>>weight>>height;
    }
    void display()
    {
        person::display(); 
        cout<<"Weight: "<<weight<<endl;
        cout<<"Height: " <<height<<endl;
    }
};

int main()
{
    fitness F;
    F.read();
    F.display();
    return 0;
}

