#include <iostream>

#ifndef _UTILS_H_
#define _UTILS_H_

class Utils {
public:
	static void wait(int seconds) {
		clock_t endwait;
		endwait = clock() + seconds * CLOCKS_PER_SEC;
		while (clock() < endwait) {}
	};

};
#endif
