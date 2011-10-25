/*
 * TemperatureMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _TEMPERATURE_MECHANICS_H_
#define _TEMPERATURE_MECHANICS_H_

class TemperatureMechanics {
	public:
		TemperatureMechanics();
		TemperatureMechanics(Character character);
		virtual ~TemperatureMechanics();
};
#endif
