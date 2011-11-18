/*
 * Food.h
 *
 * Created on: 24.10.2011
 * Author: Martin Pinto-Bazurco
 *
 */

#ifndef FOOD_H_
#define FOOD_H_

class Food {
	struct FoodType {
		double calories;
		enum CaloriesType {
			HIGH,
			MEDIUM,
			LOW
		};
	};

	public:
		Food();
		~Food();
		bool isPoisoned();

	private:
		/* Determines if this food is poisoned or not */
		bool poisoned;

		/* Computes if this food is poisoned or not using random numbers. */
		void computePoisoned();
};

#endif /* FOOD_H_ */
