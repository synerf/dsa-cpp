#include<iostream>

using namespace std;

int length(char input[]) {
    int count = 0;

    for(int i=0; input[i] != '\0'; i++) {
        count++;
    }

    return count;
}

int main() {

    // input for name
    cout<<"Enter your name: ";
    char name[100];
    cin>>name;

    // print name
    cout<<"Your name is "<<name<<endl;

    cout<<"Length is "<<length(name);

    return 0;
}