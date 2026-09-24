#include<iostream>
using namespace std;
int main() {
    int n=3;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int i=1;i<=4;i++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}