#include <cstdlib>
#include <iostream>
#include "Character.h"
#include "Utils.h"
#include "EatMechanics.h"
#include "CleanMechanics.h"
#include "LearningMechanics.h"
#include "NeedMechanics.h"
#include "WantMechanics.h"
#include "MoodMechanics.h"
#include "PlayMechanics.h"
#include "SleepMechanics.h"
#include "TemperatureMechanics.h"

using namespace std;

void initCharacter(Character character);
void testAgeMechanics(Character character);
void testCleanMechanics(Character character);
void testEatingMechanics(Character character);
void testLearningMechanics(Character character);
void testMedicineMechanics(Character character);
void testNeedMechanics(Character character);
void testWantMechanics(Character character);
void testMoodMechanics(Character character);
void testPlayMechanics(Character character);
void testSleepMechanics(Character character);
void testTemperatureMechanics(Character character);

int main(int argc, char *argv[]) {
	Character panda;

	// initializing Character "panda"
	initCharacter(panda);

	// testing the aging system
	testAgeMechanics(panda);

	system("PAUSE");
	return EXIT_SUCCESS;
}

void initCharacter(Character character) {

}

void testAgeMechanics(Character character) {

	int n = 10; // seconds to wait and years the gotshi to age
	Utils utils;
	//new Age growing N times faster 86400 Each second is 1 gotshi year
	Age age = Age(86400);
	time_t birthday = age.getBirthday();
	cout << "Date of Birth: " << ctime(&birthday) << endl;
	cout << "Age before: " << age.getCurrentAge() << endl;

	cout << "Starting countdown...\n" << endl;
	for (int i = n; i > 0; i--) {
		cout << i << endl;
		utils.wait(1);
	}
	//after 10s gotshi must be 10 years old
	if (age.getCurrentAge() == n) {
		cout << "Age after : " << age.getCurrentAge() << endl;
		cout << "Test OK. Gotshi ages properly" << endl;
	} else {
		cout << "Failed: gotshi must be " << n << " years old ";
		cout << "but was: " << age.getCurrentAge() << endl;
	}
	cout << "Finished testing Aging mechanics!!!" << endl;
}

void testCleanMechanics(Character character) {

}

void testEatingMechanics(Character character) {

}

void testLearningMechanics(Character character) {

}

void testMedicineMechanics(Character character) {

}

void testNeedMechanics(Character character) {

}

void testWantMechanics(Character character) {

}

void testMoodMechanics(Character character) {

}

void testPlayMechanics(Character character) {

}

void testSleepMechanics(Character character) {

}

void testTemperatureMechanics(Character character) {

}
