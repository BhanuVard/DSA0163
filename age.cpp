#include <iostream>

using namespace std;

int main() {
  try {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
      throw "Age must be at least 18.";
    }

  } catch (const char* message) {
    cout << "Error: " << message << endl;
  }

  return 0;
}
 
