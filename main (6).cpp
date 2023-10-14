#include<iostream>
using namespace std;
class A
{
public:
int a;
A()
{
    a=10;
}
void display()
{
    cout<<a;
}
};
int main()
{
    A A1;
    A *p;
    p=&A1;
    cout<<A1.a;
    A1.display();

}
