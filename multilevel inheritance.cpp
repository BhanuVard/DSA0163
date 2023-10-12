#include <iostream>
using namespace std;

class Person
{
public:
    char name[20];
    int age;

    void readPerson()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void displayPerson()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

class BodyType : public Person
{
public:
    char color[20];

    void readBodyType()
    {
        readPerson(); 
        cout<<"Enter body color: ";
        cin>>color;
    }

    void displayBodyType()
    {
        displayPerson();  
        cout<<"Body Color:"<<color<<endl;
    }
};

class Fitness : public BodyType
{
public:
    float weight;
    float height;

    void readFitness()
    {
        readBodyType(); 
        cout<<"Enter weight and height: ";
        cin>>weight>>height;
    }

    void displayFitness()
    {
        displayBodyType(); 
        
        cout<<"Weight :"<<weight<<endl;
        cout<<"Height :"<<height<<endl;
    }
};

class Health : public Fitness
{
public:
    int bloodPressure;

    void readHealth()
    {
        readFitness(); 
        cout<<"Enter blood pressure: ";
        cin>>bloodPressure;
    }

    void displayHealth()
    {
        displayFitness(); 
        cout<<"Blood Pressure :"<<bloodPressure<<"mmHg"<<endl;
    }
};

int main()
{
    Health H;
    H.readHealth();
    H.displayHealth();

    return 0;
}

