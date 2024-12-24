#include <iostream>
using namespace std;
int main(){

for(int i=1;i<=3;i++){
    int value= i;
    for(int j=1;j<=i;j++){
        
        cout<<value<<" ";
        value=value + 1;        
    }
    cout<<endl;
}}
/// another method solve   the example
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            cout << (i + j) << " "; // Directly calculate the value using i and j
        }
        cout << endl;
    }
}