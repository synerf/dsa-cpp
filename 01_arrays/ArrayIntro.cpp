#include<iostream>

using namespace std;

int main() {
    // int a[10];
    // a[0] = 2;
    // a[4] = 5;

    // cout<<a[0]<<" "<<a[5];

    // int a[10] = {1,2,3,4};

    // // cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3];

    // for (int i = 0; i < 10; i++) {
    //     cout<<a[i]<<" ";
    // }

    int a[5];

    for(int i=0; i<5; i++) {
        a[i] = i*i;
        cout<<a[i]<<" ";
    }    
    cout<<endl;
    
    int b;
    cout<<sizeof(a);
    return 0;
}