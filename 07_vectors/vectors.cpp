#include<iostream>
#include<vector>

using namespace std;

int main() {

  vector<int> *vp = new vector<int>();  // dynamic
  vector<int> v;  // static

  vector<int> v2(100);   // creates vector v2 of initial capacity of 100
  vector<int> v3(100,2);   // creates vector v3 of initial capacity of 100 and all elements will be 2

  // note - 
  // in vectors, better to use push_back() to insert elements instead of 
  // something like v[2] = 100
  // also better to use v.at(2) to get element at some index rather then using v[2]

  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  v[1] = 100;

  v[4] = 102;
  v[5] = 1234;

  v.push_back(23);
  v.push_back(234);

  v.pop_back();

  for(int i=0; i<v.size(); i++) {
    cout<<v.at(i)<<endl;   // here can also use v[i] since i is always valid
  }

  // cout<<v[0]<<endl;
  // cout<<v[1]<<endl;
  // cout<<v[2]<<endl;
  // cout<<v[3]<<endl;
  // cout<<v[4]<<endl;
  // cout<<v[5]<<endl;
  // cout<<v[6]<<endl;

  // cout<<v.at(4)<<endl;
  // cout<<v.at(6)<<endl;
  
  return 0;
}