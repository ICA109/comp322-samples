#include <iostream>

using namespace std;

int someFunction() {
    static int x = 0;
    return ++x;
}

int main() {
    cout << someFunction() << endl;
    cout << someFunction() << endl;
    cout << someFunction() << endl;
    //Results in 1, 2, 3
}