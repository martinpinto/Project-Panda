/*
 * Character.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco, Martin Prodanov
 *
 */

#include <iostream>
#include <vector>

#include "..\mechanics\aging\Age.h"
#include "..\mechanics\eating\Weight.h"
#include "..\mechanics\want\Want.h"
#include "..\mechanics\need\Need.h"
#include "..\mechanics\eating\HungerState.h"
#include "..\mechanics\eating\HealthState.h"
#include "..\mechanics\temperature\Temperature.h"
#include "..\mechanics\mood\Mood.h"

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

// because of vector, else would be std::vector
using namespace std;

class Character {

	public:
		Character();
		~Character();

		Age* getAge();
		HungerState* getHunger();
		Weight* getWeight();
		Temperature* getTemperature();
		Mood* getMood();

};
#endif
