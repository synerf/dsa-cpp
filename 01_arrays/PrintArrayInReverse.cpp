#include<iostream>

using namespace std;

int main() {

    cout<<"Enter array length: ";

    //input array length
    int n;
    cin>>n;

    // input for array elements
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    
    // print array elements
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // print in reverse order
        for(int i=n-1; i>=0; i--) {
        cout<<a[i]<<" ";
    }

    return 0;
}