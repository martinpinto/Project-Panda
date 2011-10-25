/*
 * PlayingMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#include "../../model/Character.h"

#ifndef _PLAYING_MECHANICS_H_
#define _PLAYING_MECHANICS_H_

class PlayingMechanics {
	public:
		PlayingMechanics();
		PlayingMechanics(Character character);
		virtual ~PlayingMechanics();
};
#endif
