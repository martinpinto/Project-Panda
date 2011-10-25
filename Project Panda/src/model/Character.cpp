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
#include "..\mechanics\aging\Age.h"
#include "..\mechanics\eating\Weight.h"
#include "..\mechanics\eating\Hunger.h"
#include "..\mechanics\temperature\Temperature.h"
#include "..\mechanics\mood\Mood.h"

Character::Character() {

}

//Character::~Character() {
//	delete &age;
//	delete &weight;
//	delete &hunger;
//	delete &mood;
//	delete &temperature;
//	delete &wants;
//	delete &needs;
//}

Age Character::getAge() {
	return this->age;
}

Weight Character::getWeight() {
	return this->weight;
}

Hunger Character::getHunger() {
	return this->hunger;
}

Temperature Character::getTemperature() {
	return this->temperature;
}

Mood Character::getMood() {
	Mood mood;
	return mood;
}
