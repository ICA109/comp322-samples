#include<string>
#include<iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        string msg = "Error. Attempting to divide by 0.";
        throw msg;
    }
    else {
        return a/b;
    }
}

int main() {
    try {
        divide(5,2);
        divide(5,0);
    }
    catch (string& msg) {
        msg[0] = '5';
        cout << msg << endl;
    }
    return 0;
}