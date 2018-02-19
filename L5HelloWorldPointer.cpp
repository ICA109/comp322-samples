#include <iostream>
#include <string>
using namespace std;

int main() {
    //int *tmp = {1, 2, 3};             //"Too many initializer variables"; 2nd half isn't an array yet
    //int *tmp = new int[3] {1, 2, 3};  //Correct

    string *sen = new string[3]{"Hello", "world", string(2, '+')};  //Requires g++ -std=c++11 mode
    
    for (int i = 0; i<3; i++) {
        cout << *(sen+i) << " ";
    }

    cout << endl;
    delete [] sen;
    return 0;
}