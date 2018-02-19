#include <iostream>

using namespace std;

int main() {
    int a = 100;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    b = 12;
    cout << a << endl;
    cout << b << endl;
    //Expected output 100, 100, 12, 12 

    //++a or a++ here (does below) doesn't make a difference here since it'll always evaluate prior to seperate print
    cout << a++ << endl;

}