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
#include "..\mechanics\want\Want.h"
#include "..\mechanics\need\Need.h"
#include "..\mechanics\eating\Hunger.h"
#include "..\mechanics\temperature\Temperature.h"
#include "..\mechanics\mood\Mood.h"

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

// because of vector, else would be std::vector
using namespace std;

class Character {

	public:
		Character();
		Age getAge();
		Hunger getHunger();
		Temperature getTemperature();
		Mood getMood();

	private:
		Age age;
		vector<Want> wants;
		vector<Need> needs;
		Hunger hunger;
		Temperature temperature;
		Mood mood;

};
#endif
