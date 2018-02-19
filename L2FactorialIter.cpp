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
    int result = 1;

    for (int i=1; i<= num; i++) {
        result *= i;
    }
    return result;
}