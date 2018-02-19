#include <iostream>
using namespace std;


class Person {
public:
    Person();
    Person(int age, char sex);
    bool canVote();
    void setAge(int age);
    void setSex(char sex);
    int getAge();
private:
    int age;
    char sex;
};

Person::Person():age(0), sex('U') {
    //Non-initialization list approach
    //this -> age = 0;
    //this -> sex = 'U';
}

Person::Person(int age, char sex) {
    this -> age = age;
    this -> sex = sex;
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
int Person::getAge() {
    return this -> age;
}


int main() {
    Person Mick;
    Person Jane(1, 'F'); //or Person Jane = Person(1, 'F');
    cout << Jane.getAge() << endl;
    //Mick.age = 24;
    //Mick.sex = 'M';
    cout << Mick.getAge() << endl;
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