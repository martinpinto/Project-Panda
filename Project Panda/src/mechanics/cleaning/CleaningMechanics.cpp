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

#include "../../utils/Utils.h"

CleaningMechanics::CleaningMechanics() {
	dirty = false;
	cleanlinessFactor = 100;
	maxDirtyFactor = 75;
}

CleaningMechanics::CleaningMechanics(Character character) {

}

CleaningMechanics::CleaningMechanics(bool isDirty, double cleanliness, short maxDirtyFactor) {
	dirty = isDirty;
	this->cleanlinessFactor = cleanliness;
	this->maxDirtyFactor = maxDirtyFactor;
}

CleaningMechanics::~CleaningMechanics() {
	delete &dirty;
	delete &cleanlinessFactor;
	delete &maxDirtyFactor;
}

void CleaningMechanics::increaseCleaniness(double threshold) {
	cleanlinessFactor += threshold;
}

void CleaningMechanics::increaseCleaniness(int threshold) {
	cleanlinessFactor += threshold;
}

void CleaningMechanics::decreaseCleaniness(double threshold) {
	cleanlinessFactor -= threshold;
}

void CleaningMechanics::decreaseCleaniness(int threshold) {
	cleanlinessFactor -= threshold;
}

double CleaningMechanics::getCleanlinessPrecise() {
	return cleanlinessFactor;
}

int CleaningMechanics::getCleanliness() {
	return (int) cleanlinessFactor;
}

bool CleaningMechanics::isDirty() {
	return dirty;
}

void CleaningMechanics::determineCleanliness(int time) {
	// gotshis get dirty with time
	Utils::wait(time);
	// decrease cleanliness
	increaseCleaniness(1.0);

	if (getCleanlinessPrecise() > maxDirtyFactor) {
		this->dirty = true;
	}
}
