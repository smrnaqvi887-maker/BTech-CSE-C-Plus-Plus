#include<iostream>
using namespace std;
int main() {
    int n=9;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<(i+1); // (i+1) ki jgh jo likho ge " " wo print ho jayega
        }
        cout<<"\n";
    }
    return 0;
}