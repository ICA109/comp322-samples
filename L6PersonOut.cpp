#include <iostream>
using namespace std;


class Person {
public:
    Person();
    bool canVote();
    void setAge(int age);
    void setSex(char sex);
private:
    int age;
    char sex;
};

Person::Person() {
    this -> age = 0;
    this -> sex = 'U';
}

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