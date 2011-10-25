/*
 * SleepingMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _SLEEPING_MECHANICS_H_
#define _SLEEPING_MECHANICS_H_

class SleepingMechanics {
	public:
		SleepingMechanics();
		SleepingMechanics(Character character);
		virtual ~SleepingMechanics();
};
#endif
