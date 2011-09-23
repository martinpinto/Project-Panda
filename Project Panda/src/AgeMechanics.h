#include <iostream>
#include <vector>
#include "Age.h"

#ifndef _AGE_MECHANICS_H_
#define _AGE_MECHANICS_H_

class AgeMechanics {
      public:
             AgeMechanics();
             void wait ( int seconds );
             Age increaseAge(Age age);
             
};
#endif
