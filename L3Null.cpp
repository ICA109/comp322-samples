#include <iostream>

using namespace std;

int main() {
    int *ptr = NULL;
    //cout << *ptr << endl;   //Will lead to segfault since no valid contents
    cout << ptr << endl;      //Address is just 0
}