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
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class BodyType
{
public:
    char color[20];

    void readBodyType()
    {
        cout << "Enter body color: ";
        cin >> color;
    }

    void displayBodyType()
    {
        cout << "Body Color: " << color << endl;
    }
};

class Fitness : public Person, public BodyType
{
public:
    float weight;
    float height;

    void readFitness()
    {
        readPerson();  // Access readPerson from Person
        readBodyType(); // Access readBodyType from BodyType

        cout << "Enter weight and height: ";
        cin >> weight >> height;
    }

    void displayFitness()
    {
        displayPerson();  // Access displayPerson from Person
        displayBodyType(); // Access displayBodyType from BodyType

        cout << "Weight: " << weight << " kg" << endl;
        cout << "Height: " << height << " cm" << endl;
    }
};

int main()
{
    Fitness F;
    F.readFitness();
    F.displayFitness();

    return 0;
}

