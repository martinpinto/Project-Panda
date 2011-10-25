/*
 * Hunger.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>

#ifndef _HUNGER_H_
#define _HUNGER_H_

class Hunger {
	protected:
		bool hunger;
		int hungerFactor;

	public:
		bool hasHunger();

	private:
		void determineHunger();

};
#endif
