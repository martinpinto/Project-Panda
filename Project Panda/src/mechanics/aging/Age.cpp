/*
 * Age.cpp
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco, Martin Prodanov
 *
 */

#include <iostream>
#include <ctime>
#include "Age.h"

#define GOTSCHI_YEAR 86400 // 24h in seconds
/**
 * Aging mechanics implemented in class Age. When a gotshi is born (new
 * Age) its birthday is stored. According to the current time and the
 * birthday its current age is computed asuming the gotshi ages every day
 * with a year. The constant GOTSHY_YEAR defines how many seconds has the
 * gotshi year.
 *
 */
Age::Age() {
	this->birthday = time(NULL);
	this->agingFactor = 1;
	this->maxAge = MAX_AGE;
}

Age::Age(bool canDie) {
	this->birthday = time(NULL);
	this->agingFactor = 1;
	this->maxAge = MAX_AGE;
	this->dies = canDie;
}

Age::Age(int agingFactor) {
	this->birthday = time(NULL);
	this->agingFactor = agingFactor;
	this->maxAge = MAX_AGE;
}

Age::Age(int agingFactor, bool canDie, int maxAge) {
	this->birthday = time(NULL);
	this->agingFactor = 1;
	this->dies = canDie;
	this->maxAge = maxAge;
}

// destructor
Age::~Age() {
	//delete &birthday;
	//delete &agingFactor;
	//delete &maxAge;
	//delete &dies;
}

/**
 * computes and returns the current Age Phase
 */

AgePhase Age::getAgePhase() {
	int age = getCurrentAge();
	if (age < 4) {
		return Baby;
	} else if (age < 13) {
		return Child;
	} else if (age < 20) {
		return Teenager;
	} else if (age < 67) {
		return Adult;
	} else
		return Grandpa;
}

/**
 * computes and returns the current age
 */
int Age::getCurrentAge() {
	int age = computeCurrentAge();
	if (age > getMaxAge()) {
		// age > 99 -> Gotshi can he die?
		if (canDie())
			return -1;
	}
	return age;
}

long Age::getBirthday() {
	return birthday;
}

int Age::computeCurrentAge() {
	time_t currentTime = time(NULL);
	int totalLifeTime = difftime(currentTime, birthday);
	return int(totalLifeTime * agingFactor) / GOTSCHI_YEAR;
}

int Age::getMaxAge() {
	return maxAge;
}

void Age::setMaxAge(int maxAge) {
	this->maxAge = maxAge;
}

bool Age::canDie() {
	return dies;
}
