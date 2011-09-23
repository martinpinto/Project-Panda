#include <iostream>
#include "Age.h"

Age::Age() {
    this->age = 0;
}

int Age::getCurrentAge() {
    return age;
}

void Age::setCurrentAge(int age) {
    this->age = age;
}
