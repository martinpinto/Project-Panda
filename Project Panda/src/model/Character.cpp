/*
 * Character.cpp
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco, Martin Prodanov
 *
 */

#include <iostream>
#include <string>

#include "Character.h"

Age* age;
Weight* weight;
vector<Want>* wants;
vector<Need>* needs;
Hunger* hunger;
Temperature* temperature;
Mood* mood;

Character::Character() {

}

Character::~Character() {
	//delete &age;
	//delete &weight;
	//delete &hunger;
	//delete &mood;
	//delete &temperature;
	//delete &wants;
	//delete &needs;
}

Age* Character::getAge() {
	return age;
}

Weight* Character::getWeight() {
	return weight;
}

Hunger* Character::getHunger() {
	return hunger;
}

Temperature* Character::getTemperature() {
	return temperature;
}

Mood* Character::getMood() {
	return mood;
}
