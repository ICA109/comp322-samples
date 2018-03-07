#include <iostream>     //Needed for input/output

using namespace std;    //Needed because cout is in the standard library (avoids shadowing issues)

//std::cout << "Hello..." (scope operator); tells compiler we're using the cout in std and not something else like library

//Both are supposed to print 15
int main() {
    int a = 7, b = 9;
    int *ptr1;
    int *ptr2 = &b;
    ptr1 = &a;

    *ptr1 = 15;
    *ptr2 = *ptr1;

    cout << a << '\n';
    cout << b << '\n';
    cout << sizeof(char) << '\n';
    //return 0;

    int *ptr = NULL;
    int i = 7; i++;
    for (int j=0; j<=2; j++) {
        i = j;
    }
    ptr = &i;
    if (ptr != NULL) {
        (*ptr) *= (*ptr);
    }
    if (ptr != NULL) {
        cout << (*ptr)++ << endl;   //Prints 4 instead of 5 since we have post-increment
        cout << i << endl;
    }
    else {
        cout << "pointer is NULL" << endl;
    }


}