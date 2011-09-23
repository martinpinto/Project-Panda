#include <cstdlib>
#include <iostream>
#include "Character.h"
#include "AgeMechanics.h"
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

int main(int argc, char *argv[])
{
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
     int n;
     cout << "Starting countdown...\n" << endl;
     AgeMechanics ageMechanics;
     for (n=10; n>0; n--) {
         cout << n << endl;
         ageMechanics.wait(1);
     }
     cout << "Finished!!!\n" << endl;
     Age age;
     age.setCurrentAge(3);
     cout << "Age before: " + age.getCurrentAge() << endl;
     age = ageMechanics.increaseAge(age);
     cout << "Age increased: " + age.getCurrentAge() << endl;
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
