#include <iostream>
using namespace std;

class myVector {
    public:
        myVector():
            x(0), y(0), z(0) {}
        myVector(int a, int b, int c):
            x(a), y(b), z(c) {}
        void display() {
            cout << x << ", " << y << ", " <<  z << endl;
        }
    private:
        int x, y, z;
};

int main() {
    myVector v1(2, 4, 6);
    myVector v2(3, 4, 5);
    v1.display();
    v2.display();
}

