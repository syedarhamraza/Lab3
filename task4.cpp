#include <iostream>
using namespace std;

int main() {
   bool isHot = true;
   bool isSunny = false;
   cout << "isHot AND isSunny: " << (isHot && isSunny) << endl;
   cout << "isHot OR isSunny: " << (isHot || isSunny) << endl;
   cout << "NOT isHot: " << (!isHot) << endl;
    return 0;
}