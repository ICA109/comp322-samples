#include <iostream>
using namespace std;


class Person {
public:
    bool canVote();
    void setAge(int age);
    void setSex(char sex);
private:
    int age;
    char sex;
};


bool Person::canVote() {
    if (age >= 18) {
        return true;
    }
    return false;
}
void Person::setAge(int age) {
    this -> age = age;
}
void Person::setSex(char sex) {
    this -> sex = sex;
}


int main() {
    Person Mick;
    //Mick.age = 24;
    //Mick.sex = 'M';
    Mick.setAge(24);
    Mick.setSex('M');

    if(Mick.canVote()) {
        cout << "Mike can vote" << endl;
    }
    else {
        cout << "Mike cannot vote" << endl;
    }
    return 0;
}