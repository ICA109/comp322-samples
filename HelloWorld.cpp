#include <iostream>     //Needed for input/output

using namespace std;    //Needed because cout is in the standard library (avoids shadowing issues)

//std::cout << "Hello..." (scope operator); tells compiler we're using the cout in std and not something else like library

int main() {
    cout << "Hello World!" << endl;
    return 0;
}