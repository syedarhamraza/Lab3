#include <iostream>
using namespace std;

int main() {
   int a = 0, b = 0;
   cout << "Enter two integers: ";
   cin >> a >> b;

   cout << "a == b: " << (a == b) << endl;
   cout << "a != b: " << (a != b) << endl;
   cout << "a > b: " << (a > b) << endl;
   cout << "a < b: " << (a < b) << endl;
   cout << "a >= b: " << (a >= b) << endl;
   cout << "a <= b: " << (a <= b) << endl;

    return 0;
}