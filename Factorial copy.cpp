#include <iostream>    
using namespace std;

//function declaration
int factorial(int nbre);

//main function
int main() {
    cout << factorial(5);
    return 0;
}

//function definition
int factorial(int nbre) {
    if (nbre<=1)
        return 1;
    else
        return nbre*factorial(nbre-1);
}