#include <iostream>
using namespace std;

class aClass {
    public:
        aClass() {
            value = 1;
        }
        friend int setValue(aClass& ac, int num);
        //int value;
    private:
        int value;
};

int setValue(aClass& ac, int num) {
    ac.value = num;
    return ac.value;
}

int main() {
    aClass ac;
    cout << setValue(ac, 3) << endl;

    return 0;
}