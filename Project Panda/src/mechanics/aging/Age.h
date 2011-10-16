/*
 * Age.h
 *
 * Created on: 04.09.2011
 * Author: Martin Pinto-Bazurco, Martin Prodanov
 *
 */

#include <iostream>
#include <vector>
#include <ctime>

#ifndef _AGE_H_
#define _AGE_H_

enum AgePhase {
	Baby,
	Child,
	Teenager,
	Adult,
	Grandpa
};

class Age {

public:
	Age();
	Age(bool canDie);
	Age(int agingFactor);
	int getCurrentAge();
	long getBirthday();
	AgePhase getAgePhase();
	bool canDie();
	int getMaxAge();
	void setMaxAge(int maxAge);

private:
	int age;
	int agingFactor; // causes the gotshi to age a factor faster
	long birthday;
	bool dies;
	int maxAge;
	int computeCurrentAge();
};

#endif
