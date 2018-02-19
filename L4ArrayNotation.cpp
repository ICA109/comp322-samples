#include <iostream>
using namespace std;

//Return an integer array (or really a pointer to its starting address)
int* getIntArray(int size) {
    int *ptr = new int[size];   //Can use this notation instead
    return ptr;
}

//Fill with contents from 0 to 4
int main() {
    int *x = getIntArray(5);

    for (int i=0; i<5; i++) {
        //*(x+i) = i; //Move to correct "index" address in array 
        //Array notation
        x[i] = i;
    }

    //Now print
    for (int i=0; i<5; i++) {
        //cout <<  *(x+i) << endl;
        //Array notation
        cout <<  x[i] << endl;
    }

    delete [] x;    //Don't forget to clean-up
}