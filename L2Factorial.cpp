#include <iostream>

using namespace std;

//Declare functions
int factorial(int num);

//Implement methods
int main() {
    int result = factorial(5);
    cout << result << endl;
}

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    else {
       return num * factorial(num-1);
    }
}