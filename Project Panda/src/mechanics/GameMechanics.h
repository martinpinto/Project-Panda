/*
 * GameMechanics.h
 *
 * Created on: 07.10.2011
 * Author: Martin Pinto-Bazurco
 *
 */
#include "aging/AgingMechanics.h"
#include "cleaning/CleaningMechanics.h"
#include "eating/EatingMechanics.h"
#include "health/HealthMechanics.h"
#include "learning/LearningMechanics.h"
#include "mood/MoodMechanics.h"
#include "need/NeedMechanics.h"
#include "playing/PlayingMechanics.h"
#include "sleeping/SleepingMechanics.h"
#include "temperature/TemperatureMechanics.h"
#include "want/WantMechanics.h"

#include "../model/Character.h"

#ifndef _GAMEMECHANICS_H_
#define _GAMEMECHANICS_H_

class GameMechanics {
	public:
		GameMechanics();
		virtual ~GameMechanics();
		void setCharacter(Character character);

};

#endif /* _GAMEMECHANICS_H_ */
