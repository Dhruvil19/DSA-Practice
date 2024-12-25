#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for (int j=1;j<=i;j++){
            char ch=i-1+'A';
            

            cout<<ch <<" ";
        }
        cout<<endl;
    }
}