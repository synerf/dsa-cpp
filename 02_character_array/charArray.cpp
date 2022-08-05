#include<iostream>

using namespace std;

int main() {

    cout<<"Enter your name: ";

    char name[100];
    cin>>name;

    name[4] = 'x';
    name[3] = 'f';
    cout<<"Your name is " <<name;

    return 0;
}