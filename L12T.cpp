#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

// A generic sort function 
template <typename T>
T subtract(T a, T b)
{
    //return a;
    return a - b;
}
 
// Template Specialization: A function 
// specialized for char data type
template <>
string subtract<string>(string a, string b)
{
    size_t pos = a.find(b);
    string str = a.substr(0, pos);
    return str;
}

int main() {
    cout << subtract<double>(9,12.11) << endl;
    string a = "Hello world";
    string b = "world";
    cout << subtract<string>(a, b) << endl;
    return 0;
}