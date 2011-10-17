/*
 * AlertSystem.h
 *
 * Created on: 04.10.2011
 * Author: Martin Pinto-Bazurco
 *
 */
#include "Logger.h"

#ifndef _ALERTSYSTEM_H_
#define _ALERTSYSTEM_H_

class AlertSystem {
	public:
		AlertSystem();
		virtual ~AlertSystem();

	private:
		Logger logger;
};

#endif /* ALERTSYSTEM_H_ */
