/*
 * WantMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _WANT_MECHANICS_H_
#define _WANT_MECHANICS_H_

class WantMechanics {
	public:
		WantMechanics();
		WantMechanics(Character character);
		virtual ~WantMechanics();
};
#endif
