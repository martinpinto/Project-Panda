#include <iostream>
#include <ctime>
#include "Utils.h"

void Utils::wait(int seconds) {
     clock_t endwait;
     endwait = clock () + seconds * CLOCKS_PER_SEC;
     while (clock() < endwait) {}
}
