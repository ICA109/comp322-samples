#include <iostream>
using namespace std;

int main() {
    int *x;
    int a = 12;
    if (a <= 22) {
        int y = 13;
        x = &y;
    }
    cout << *x << endl;  //Refers to automatic variable with local scope, hence may be invalid if garbage-collected
}