#include<iostream>
using namespace std; 
int main(){
    // 3 2 1
    //  3 2 1
    //  321 
    // logic 
    // n-j-1
    for (int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<3-j;
        }
        cout<<endl;
    }
}