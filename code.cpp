#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
if (marks>=90){
    cout<<"A";
} else if (marks>=80 && marks<90){
    cout<<"B";
} else if (marks>=60){
    cout<<"C";
} else if (marks<60){
    cout<<"E";
}   
return 0;
}