#include<iostream>
using namespace std;
int main() {
  float arr[]={ 1.3, 2.9, 3.5, 4.4, 5.4};
float *ptr;
 ptr=&arr[0];
  for (int i=1;i<=5;i++) {
    cout<<*ptr<<endl;
    ptr++;
  }

  return 0;
}
