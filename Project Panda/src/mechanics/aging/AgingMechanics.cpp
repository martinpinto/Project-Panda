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
#include "../../utils/Utils.h"

AgingMechanics::AgingMechanics() {
}

void AgingMechanics::wait(int seconds) {
	Utils::wait(seconds);
}

Age AgingMechanics::getAge() {
	return this->age;
}

void AgingMechanics::estimatePhase() {

}

Age AgingMechanics::computeAgeDetails() {
	return NULL;
}
