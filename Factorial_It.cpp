#include <iostream>    
using namespace std;

//function declaration
int factorial(int nbre);

//main function
int main() {
    //cout << factorial(5);
    //cout << endl << factorial(5); prints extra line above 120
    cout << factorial(5) << endl;   //prints extra line below 120
    return 0;
}

//function definition
int factorial(int nbre) {
    
    int ans = 1;    //Base

    for (int i=nbre; i>=1; i--) {
        ans = ans*i;
    }
    return ans;
}