/*
 * HealthMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _HEALTH_MECHANICS_H_
#define _HEALTH_MECHANICS_H_

class HealthMechanics {

	public:
		HealthMechanics();
		HealthMechanics(Character character);
		virtual ~HealthMechanics();
};
#endif
