/*
 * CleaningMechanics.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#include <iostream>
#include <vector>
#include <string>

#include "../../model/Character.h"

#ifndef _CLEANING_MECHANICS_H_
#define _CLEANING_MECHANICS_H_

class CleaningMechanics {
	protected:
		double cleanlinessFactor;
		bool dirty;
		short maxDirtyFactor;

	public:
		CleaningMechanics();
		CleaningMechanics(Character character);
		CleaningMechanics(bool isDirty, double cleanliness, short maxDirtyFactor);
		virtual ~CleaningMechanics();
		void increaseCleaniness(double threshold);
		void increaseCleaniness(int threshold);
		void decreaseCleaniness(double threshold);
		void decreaseCleaniness(int threshold);
		double getCleanlinessPrecise();
		int getCleanliness();
		bool isDirty();
		void determineCleanliness(int time);
		//void setAlert(string message);

	private:

};
#endif
