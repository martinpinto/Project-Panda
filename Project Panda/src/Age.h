#include <iostream>
#include <vector>
#include <ctime>

#ifndef _AGE_H_
#define _AGE_H_

class Age {

public:
	Age();
	Age(int agingFactor);
	int getCurrentAge();
	long getBirthday();

private:
	int age;
	int agingFactor; // causes the gotshi to age a factor faster
	long birthday;
	int computeCurrentAge();
};
#endif
