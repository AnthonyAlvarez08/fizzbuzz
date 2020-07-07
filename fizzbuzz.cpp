// f6 to run in vs code
#include <iostream>
using namespace std;

int main() {
    for (int h = 1; h < 101; ++h) {
        if (h % 3 == 0) {
            cout << "Fizz";
        }
        if (h % 5 == 0) {
            cout << "Buzz";
        }
        if (h % 3 != 0 && h % 5 != 0) {
            cout << h;
        }
        cout << endl;
    }
    return 0;
}