/*#include<iostream>
using namespace std;
int main() {
    int i=1;  
    int n=10;
    while(i<=n) {
        cout<<i<<" ";
        i++;
    } return 0;
}  

#include<iostream>
using namespace std;
int main() {
    int i=2;
    int n=5;
    int sum=0;
    while(i<=n){
        sum+=i;
        i+=2;
    } cout<<""<<sum;
    return 0;
}*/
    
#include<iostream>
using namespace std;
int main() {
    int n=5;
    int sum=0; 
    for(int i=0;i<=n;i+=2){ 
        sum+=i;
    } cout<<""<<sum; 
    return 0;
}