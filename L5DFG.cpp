#include <iostream>
using namespace std;

int main() {
   int *x = new int;
   int *y = x;
   *y = 7;
   cout << *x << endl;
   cout << *y << endl;
   delete x;
   //delete y;    //This causes can error since y was never allocated in the 1st place...
}