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
        myVector operator+ (const myVector &vec) {
            myVector result;
            result.x = this->x + vec.x;
            result.y = this->y + vec.y;
            result.z = this->z + vec.z;
            return result;
        }

    private:
        int x, y, z;
};

int main() {
    myVector v1(2, 4, 6);
    myVector v2(3, 5, 7);
    v1.display();
    v2.display();
    myVector v3 = v1 + v2;
    v3.display();
}

