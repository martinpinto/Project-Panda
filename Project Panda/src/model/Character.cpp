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
#include "..\Age.h"
#include "..\mechanics\eating\Hunger.h"
#include "..\mechanics\temperature\Temperature.h"
#include "..\mechanics\mood\Mood.h"

Character::Character() {

}

Age Character::getAge() {
	return this->age;
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
