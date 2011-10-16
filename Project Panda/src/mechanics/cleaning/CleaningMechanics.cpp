/*
 * CleaningMechanics.cpp
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <stdio.h>
#include "CleaningMechanics.h"

CleaningMechanics::CleaningMechanics() {
	dirty = false;
	cleanliness = 0;
}

CleaningMechanics::~CleaningMechanics() {
	delete &dirty;
	delete &cleanliness;
}

void CleaningMechanics::increaseCleaniness(double threshold) {
	cleanliness += threshold;
}

void CleaningMechanics::increaseCleaniness(int threshold) {
	cleanliness += threshold;
}

void CleaningMechanics::decreaseCleaniness(double threshold) {
	cleanliness -= threshold;
}

void CleaningMechanics::decreaseCleaniness(int threshold) {
	cleanliness -= threshold;
}

double CleaningMechanics::getCleanlinessPrecise() {
	return cleanliness;
}

int CleaningMechanics::getCleanliness() {
	return (int) cleanliness;
}

bool CleaningMechanics::isDirty() {
	return dirty;
}

void CleaningMechanics::determineCleanliness() {

}
