/*
 * AgingMechanics.h
 *
 *  Created on: 04.09.2011
 *      Author: Martin Pinto-Bazurco, Martin Prodanov
 */

#include <iostream>
#include <vector>
#include "Age.h"

#ifndef _AGING_MECHANICS_H_
#define _AGING_MECHANICS_H_

class AgingMechanics {
      public:
             AgingMechanics();
             void wait ( int seconds );
             void estimatePhase();
             Age computeAgeDetails();
             Age getAge();
      private:
             Age age;
};
#endif
