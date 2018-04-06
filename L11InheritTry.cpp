#include<string>
#include<iostream>
using namespace std;


class DivideByZeroException : public exception {

    virtual const char* what() const throw() {
        return "Error. Cannot divide by zero!";
    }


};


double divide(double a, double b) {
    DivideByZeroException ze;
    if (b == 0) {
        throw ze;
    }
    else {
        return a/b;
    }
}

int main() {
    try {
        cout << divide(5,2) << endl;
        cout << divide(5,0) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    catch (...) {
        cout << "Other uncaught exception." << endl;
    }
    return 0;
}