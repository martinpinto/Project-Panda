/*
 * EatingMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _EATING_MECHANICS_H_
#define _EATING_MECHANICS_H_

class EatingMechanics {

	public:
		EatingMechanics();
		EatingMechanics(Character character);
		virtual ~EatingMechanics();
		void determineHunger();
		HealthState eat();

	private:
		int caloriesMeter;

};
#endif
