/*
 * MoodMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _MOOD_MECHANICS_H_
#define _MOOD_MECHANICS_H_

class MoodMechanics {
	public:
		MoodMechanics();
		MoodMechanics(Character character);
		virtual ~MoodMechanics();
};
#endif
