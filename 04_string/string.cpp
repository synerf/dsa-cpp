#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    string s = "abc";
    cout<<s<<endl;

    string s2;
    s2 = "def";
    cout<<s2<<endl;

    string *sp = new string;
    *sp = "mno";
    cout<<sp<<endl;
    cout<<*sp<<endl;


    // using vector of strings as 2d array for string
    vector<string> v;
    v.push_back(s);
    v.push_back("hello");

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
        sort(v[i].begin(), v[i].end());
        cout<<v[i]<<endl;
    }


    // string s3;
    // getline(cin, s3);
    // cout<<s3<<endl;


    // can use indexing in string
    string s4 = "abcdrgfd";
    cout<<s4[1]<<endl;
    s4[0] = 'd';       // can also change value using index
    cout<<s4<<endl;


    // size() and length(), both are same
    cout<<s4.size()<<endl;
    cout<<s4.length()<<endl;


    // will give all the values starting from index 3 till last index
    cout<<s4.substr(3)<<endl;  
    // (a,b) a - start from a, b - give b number of characters
    cout<<s4.substr(3, 4)<<endl;  


    // returns index of first occurence of characters in the string
    cout<<s4.find("drg")<<endl;   

    
    int a = 123;
    // convert to string
    string s5 = to_string(a);
    s5.push_back('5');  // can push character
    cout<<s5<<endl;

    return 0;
}