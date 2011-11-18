/*
 * Hunger.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#ifndef _HUNGERSTATE_H_
#define _HUNGERSTATE_H_

class HungerState {
	protected:
		bool hunger;
		int hungerFactor;

	public:
		bool hasHunger();

		/* Determines what can of food type the character wants to eat next. */
		Food nextFood();

	private:
		void determineHunger();

};
#endif
