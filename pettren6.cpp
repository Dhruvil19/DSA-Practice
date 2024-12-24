// #include <iostream>
// using namespace std; 
// int main() {
//     for (int i = 1; i <= 3; i++) {       // Outer loop runs 3 times
//         for (int j = 1; j <= 3; j++) {   // Inner loop runs 3 times
//             cout << 4 - j;               // Prints 3, 2, 1
//         }
//         cout << endl;                    // Newline after each row
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 1;

    cout << "Enter a number to print the triangular pattern: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count;
            count++;
        }
        cout << endl;
    }

    return 0;
}
