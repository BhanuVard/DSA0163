#include<iostream>
using namespace std;
class phone
{
    private:
int password;
public:
long int phonenumber;
phone() 
{
    password=1234;
    phonenumber=9731790288;
    
}

friend void display(phone)
};
void display(phone P)
{
    cout<<P.password<<endl<<P.phonenumber<<endl;
    
}
int main()
{
    phone mymobile;
    display(mymobile);
}
