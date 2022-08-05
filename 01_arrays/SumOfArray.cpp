#include<iostream>

using namespace std;

int main() {

    cout<<"Enter the number of elements"<<endl;

    // input for length of array
    int n;
    cin>>n;

    // input for array elements
    int a[n];
    for(int i; i<n; i++) {
        cin>>a[i];
    }

    // print array elements
    for(int i=0; i<n; i++) {
        cout<<a[i];
    }
    cout<<endl;

    // calculate sum of array elements
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += a[i];
    }

    cout<<"Sum of array elements: "<<sum;
}