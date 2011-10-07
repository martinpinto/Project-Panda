/*
 * AgeMechanics.cpp
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco, Martin Prodanov
 *
 */

#include <iostream>
#include <time.h>
#include "AgingMechanics.h"

AgingMechanics::AgingMechanics() {
                             
}

void AgingMechanics::wait(int seconds) {
     clock_t endwait;
     endwait = clock () + seconds * CLOCKS_PER_SEC;
     while (clock() < endwait) {}
}

Age AgingMechanics::increaseAge(Age age) {
    int currentAge = age.getCurrentAge();
    age.setCurrentAge(++currentAge);
    
    return age;
}

void AgingMechanics::estimatePhase() {

}

Age AgingMechanics::computeAgeDetails() {

}
