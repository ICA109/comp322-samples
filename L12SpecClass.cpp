#include<string>
#include<iostream>
#include<algorithm>
using namespace std;


template <typename T>
T subtract(T a, T b) {
    return a - b;
}

template <>
string subtract(string a, string b) {
    size_t pos = a.find(b);
    string str = a.substr(0, pos);
    return str;
}

int main() {
    cout << subtract<int>(9, 12.11) << endl;
    
    string a = "Hello world";
    string b = "world";
    cout << subtract<string>(a, b);
    return 0;
}