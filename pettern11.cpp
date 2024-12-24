#include <iostream>
using namespace std;

int main() {
    int rows = 3;  // Number of rows in the pattern
    int num = 1;   // Starting number

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;  // Increment the number
        }
        cout << endl;  // Move to the next line
    }

    return 0;
}