#include<iostream>
using namespace std;


template <typename T, typename U=double>
void printValues(T n1, U n2) {
    cout << n1 << endl;
    cout << n2 << endl;
}

int main() {
    printValues<int>(1, 2.5);
    return 0;
}