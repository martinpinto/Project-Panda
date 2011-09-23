#include <iostream>
#include <string>

#include "Character.h"
#include "Age.h"
#include "Hunger.h"
#include "Temperature.h"
#include "Mood.h"

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
