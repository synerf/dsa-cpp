#include<iostream>

using namespace std;

int main() {

    // input two numbers
    cout<<"Enter two numbers: ";
    int a, b;
    cin>>a>>b;

    // print before swapping
    cout<<"Before swapping:"<<endl;
    cout<<a<<" "<<b<<endl;

    // swap numbers using temp

    // int temp = a;
    // a = b;
    // b = temp;

    // swap numbers with xor
    // a = a^b;
    // b = a^b;
    // a = a^b;

    // swap with inbuilt function
    swap(a,b);

    // print after swapping
    cout<<"After swapping:"<<endl;
    cout<<a<<" "<<b<<endl;

    return 0;
}