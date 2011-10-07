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
#include "model\Character.h"
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

void testAgingMechanics(Character character) {
	int n;
	cout << "Starting countdown...\n" << endl;
	AgingMechanics agingMechanics;
	for (n = 10; n > 0; n--) {
		cout << n << endl;
		agingMechanics.wait(1);
	}
	cout << "Finished!!!\n" << endl;
	Age age;
	age.setCurrentAge(3);
	cout << "Age before: " + age.getCurrentAge() << endl;
	age = agingMechanics.increaseAge(age);
	cout << "Age increased: " + age.getCurrentAge() << endl;
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
