#include <iostream>

using namespace std;

//Declare functions
int abs(int val);
double abs(double val);

//Implement methods
int main() {
    cout << abs(-4.3) << endl;
}

int abs(int val) {
    //int ans;
    //ans = (val >= 0) ? val : -val;
    //return ans;
    return (val >= 0) ? val : -val;
}

double abs(double val) {
    //double ans;
    //ans = (val >= 0) ? val : -val;
    //return ans;
    return (val >= 0) ? val : -val;
}