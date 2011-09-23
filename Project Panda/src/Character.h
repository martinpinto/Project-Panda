#include <iostream>
#include <vector>
#include "Age.h"
#include "Want.h"
#include "Need.h"
#include "Hunger.h"
#include "Temperature.h"
#include "Mood.h"

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

using namespace std; // because of vector, else would be std::vector

class Character {
      public:
             Character();
             Age getAge();
             Hunger getHunger();
             Temperature getTemperature();
             Mood getMood();

      private:
              Age age;
              vector<Want> wants;
              vector<Need> needs;
              Hunger hunger;
              Temperature temperature;
              Mood mood;

};
#endif
