#include<iostream>

using namespace std;

int main() {

    cout<<"Enter length of array: ";

    // input array length
    int n;
    cin>>n;

    // input array elements
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    // print array elements before reversing
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // reverse the array
    int start = 0;
    int end = n-1;
    while(start <= end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    // print array elements after reversing
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}