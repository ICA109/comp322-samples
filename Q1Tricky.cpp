#include <iostream>
using namespace std;


class Simple {
int x;

public:
    Simple(int z) {
        x = z;
    }
    int getX() {
        return x;
    }

};



int main() {
    int *a = new int[2];
    *a = 20;
    cout << *a << endl;
    delete a;
    cout << *a << endl;

}