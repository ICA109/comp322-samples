#include <iostream>

using namespace std;

int main() {
    int a = 7, b = 9;
    int *ptr1;  
    int *ptr2 = &b; //ptr2 points to b
    ptr1 = &a; //ptr1 points to a

    *ptr1 = 15; //a updated to 15
    *ptr2 = *ptr1;  //b also updated to a which is 15

    cout << a << '\n';
    cout << b << '\n';
    return 0;
    //Expect 15, 15
}