#include<iostream>
using namespace std;
int main()
{
    try{
        
    
    int age;
    cout<<"enter the age:";
    cin>>age;
    if(age<18)
    {
        throw "ageis lesser than 18:";
}
else
{
    cout<<"eligible to vote:";
}
}
catch (const char*e)
{
    cout<<"not eligible to vote:";
}
return 0;
}