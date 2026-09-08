#include <iostream>
#include "utilities.h"
using namespace std;

int main() {
    cout << "add(2,3) == 5: " << (add(2,3) == 5 ? "PASS" : "FAIL") << endl;
    cout << "add(-1,1) == 0: " << (add(-1,1) == 0 ? "PASS" : "FAIL") << endl;
    return 0;
}