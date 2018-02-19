#include <iostream>

using namespace std;


int main() {
    int *ptr = NULL;
    int i = 7; i++; //i++ doesn't actually do anything meaningful
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