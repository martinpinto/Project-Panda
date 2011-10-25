/*
 * NeedMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _NEED_MECHANICS_H_
#define _NEED_MECHANICS_H_

class NeedMechanics {

	public:
		NeedMechanics();
		NeedMechanics(Character character);
		virtual ~NeedMechanics();
};
#endif
