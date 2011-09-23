#include <iostream>
#include <time.h>
#include "AgeMechanics.h"

AgeMechanics::AgeMechanics() {
                             
}

void AgeMechanics::wait(int seconds) {
     clock_t endwait;
     endwait = clock () + seconds * CLOCKS_PER_SEC;
     while (clock() < endwait) {}
}

Age AgeMechanics::increaseAge(Age age) {
    int currentAge = age.getCurrentAge();
    age.setCurrentAge(++currentAge);
    
    return age;
}
