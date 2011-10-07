/*
 * main.cpp
 * This class is used for application testing purposes using a Test-Driven Approach.
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco, Martin Prodanov
 *
 */

#include <cstdlib>
#include <iostream>

#include "mechanics\aging\AgingMechanics.h"
#include "mechanics\eating\EatingMechanics.h"
#include "mechanics\cleaning\CleaningMechanics.h"
#include "mechanics\learning\LearningMechanics.h"
#include "mechanics\need\NeedMechanics.h"
#include "mechanics\want\WantMechanics.h"
#include "mechanics\mood\MoodMechanics.h"
#include "mechanics\playing\PlayingMechanics.h"
#include "mechanics\sleeping\SleepingMechanics.h"
#include "mechanics\temperature\TemperatureMechanics.h"

using namespace std;

void initCharacter(Character character);
void testAgingMechanics(Character character);
void testCleaningMechanics(Character character);
void testEatingMechanics(Character character);
void testLearningMechanics(Character character);
void testHealthMechanics(Character character);
void testNeedMechanics(Character character);
void testWantMechanics(Character character);
void testMoodMechanics(Character character);
void testPlayingMechanics(Character character);
void testSleepingMechanics(Character character);
void testTemperatureMechanics(Character character);
void wait(int seconds);
void fail(int isValue, int mustValue);

int main(int argc, char *argv[]) {
	Character panda;

	// initializing Character "panda"
	initCharacter(panda);

	// testing the aging system
	testAgingMechanics(panda);

	system("PAUSE");
	return EXIT_SUCCESS;
}

void initCharacter(Character character) {

}

void testAgeMechanics(Character character) {

	int n = 3; // seconds to wait and years the gotshi to age
	//new Age growing N times faster 86400 Each second is 1 gotshi year
	Age age = Age(86400);
	time_t birthday = age.getBirthday();
	cout << "Date of Birth: " << ctime(&birthday) << endl;
	cout << "Age before: " << age.getCurrentAge() << endl;

	cout << "Starting countdown . . ." << endl;

	wait(n);

	//after N seconds gotshi must be 10 years old
	if (age.getCurrentAge() == n && age.getAgePhase() == Baby) {
		cout << "Age after : " << age.getCurrentAge() << endl;
		cout << "Test OK. Gotshi ages properly" << endl;
	} else {
		fail(age.getCurrentAge(), n);
		return;
	}

	int m = 3;
	n = n + m;
	wait(m);
	cout << "Aging additional "<< m << " years" << endl;

	if (age.getCurrentAge() == n && age.getAgePhase() == Child) {
		cout << "Age after : " << age.getCurrentAge() << " OK." << endl;
	} else {
		fail(age.getCurrentAge(), n);
		return;
	}

	n = n + m;
	wait(m);
	cout << "Aging additional "<< m << " years" << endl;

	if (age.getCurrentAge() == n && age.getAgePhase() == Child) {
		cout << "Age after : " << age.getCurrentAge() << " OK." << endl;
	} else {
		cout << "Failed: gotshi must be " << n << " years old ";
		cout << "but was: " << age.getCurrentAge() << endl;
	}

	m = 10;
	n = n + m;
	wait(m);
	cout << "Aging additional "<< m << " years" << endl;

	if (age.getCurrentAge() == n && age.getAgePhase() == Teenager) {
		cout << "Age after : " << age.getCurrentAge() << " OK." << endl;
	} else {
		fail(age.getCurrentAge(), n);
		return;
	}

	n = n + m;
	wait(m);
	cout << "Aging additional "<< m << " years" << endl;

	if (age.getCurrentAge() == n && age.getAgePhase() == Adult) {
		cout << "Age after : " << age.getCurrentAge() << " OK." << endl;
	} else {
		fail(age.getCurrentAge(), n);
		return;
	}

	m = 50;
	n = n + m;
	wait(m);
	cout << "Aging additional "<< m << " years" << endl;

	if (age.getCurrentAge() == n && age.getAgePhase() == Grandpa) {
		cout << "Age after : " << age.getCurrentAge() << " OK." << endl;
	} else {
		fail(age.getCurrentAge(), n);
		return;
	}

	cout << "Test of Aging Mechanics Successful!!!" << endl;
}

void testCleaningMechanics(Character character) {
	CleaningMechanics cleaningMechanics;

}

void testEatingMechanics(Character character) {

}

void testLearningMechanics(Character character) {

}

void testHealthMechanics(Character character) {

}

void testNeedMechanics(Character character) {

}

void testWantMechanics(Character character) {

}

void testMoodMechanics(Character character) {

}

void testPlayingMechanics(Character character) {

}

void testSleepingMechanics(Character character) {

}

void testTemperatureMechanics(Character character) {

}

void wait(int seconds){
	for (int i = seconds; i > 0; i--) {
		cout << ".";
		Utils::wait(1);
	}
	cout << endl;
}

void fail(int isValue, int mustValue){
	cout << "Failed: value must be " << mustValue << " years old ";
	cout << "but was: " << isValue << endl;
	cout << "Test failed!" << endl;
}


