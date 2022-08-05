#include<iostream>

using namespace std;

void printArray(int a[][5], int m, int n) {
    // print 2d array row wise
    cout<<"Row wise"<<endl;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    int a[5][5] = {
            {1,2}, 
            {3,4}
        };

    printArray(a, 5, 5);
    
    // // 2d array
    // int a[100][100];

    // // input r,c
    // int m, n;
    // cin>>m>>n;

    // // input from user row wise
    // for(int i=0; i<m; i++) {
    //     for(int j=0; j<n; j++) {
    //         cin>>a[i][j];
    //     }
    // }

    // // print 2d array row wise
    // cout<<"Row wise"<<endl;
    // for(int i=0; i<m; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // // print 2d array column wise
    // cout<<"Column wise"<<endl;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<m; j++) {
    //         cout<<a[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}