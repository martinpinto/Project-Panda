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
}

Age::Age(int agingFactor) {
	this->birthday = time(NULL);
	this->agingFactor = agingFactor;
}

int Age::getCurrentAge() {
	int age = computeCurrentAge();
	if (age < 100) {
		return age;
	} else {
		// age > 99 -> Gotshi must die;
		// TODO: tell the gotchi to die somehow or check somewhere else
		return -1;
	}
}

long Age::getBirthday() {
	return birthday;
}

int Age::computeCurrentAge() {
	time_t currentTime = time(NULL);
	int totalLifeTime = difftime(currentTime, birthday);
	return int(totalLifeTime * agingFactor) / GOTSCHI_YEAR;
}

