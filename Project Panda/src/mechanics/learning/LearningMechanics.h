/*
 * LearningMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#ifndef _LEARNING_MECHANICS_H_
#define _LEARNING_MECHANICS_H_

#include "../../model/Character.h"

class LearningMechanics {

	public:
		LearningMechanics();
		LearningMechanics(Character character);
		virtual ~LearningMechanics();
};
#endif
