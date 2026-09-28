#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

int main() {
    string lyrics[] = {
        "arz kiya hai",
        "Humne bhi likha kuchh tere baare mein hai ",
        "Hathon Ko Sambhale Mere Hathon Mein",
        "Kaise Hathon Ko Sambhale Mere Hathon Mein",
        "Jab Tak Neend Na Aaye In Lakeeron Mein",
        "Baatein ho haye",
    };
    int total = sizeof(lyrics)/sizeof(lyrics[0]);

    for(int i=0;i<total;i++){
        for(char c : lyrics[i]){
            cout<<c<<flush;
            Sleep(80);
        }
        cout<<"\n";
        Sleep(50);
    }
    return 0;
}