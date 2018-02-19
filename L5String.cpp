#include <iostream>
#include <string>
using namespace std;

int main() {
    string strName;
    strName = "Chad";
    cout << strName << endl;

    //strcpy
    char destName[10];  //Stick [] with variable name unlike in Java!
    strcpy(destName, "Chad");
    cout << destName << endl;

    return 0;
}

