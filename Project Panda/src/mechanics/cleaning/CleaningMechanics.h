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

#ifndef _CLEANING_MECHANICS_H_
#define _CLEANING_MECHANICS_H_

class CleaningMechanics {
	protected:
		double cleanliness;
		bool dirty;

	public:
		CleaningMechanics();
		void increaseCleaniness(double threshold);
		void increaseCleaniness(int threshold);
		void decreaseCleaniness(double threshold);
		void decreaseCleaniness(int threshold);
		double getCleanlinessPrecise();
		int getCleanliness();
		bool isDirty();
		//void setAlert(string message);

	private:
		void determineCleanliness();

};
#endif
