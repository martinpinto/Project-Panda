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

AgingMechanics::AgingMechanics(Character character) {
	this->age = character.getAge();
}

void AgingMechanics::wait(int seconds) {
	Utils::wait(seconds);
}

Age AgingMechanics::getAge() {
	return age;
}

AgePhase AgingMechanics::getAgePhase() {
	return age->getAgePhase();
}

Age AgingMechanics::computeAgeDetails() {
	return age;
}
