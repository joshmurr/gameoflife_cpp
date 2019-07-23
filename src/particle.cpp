/*
 * particle.cpp
 *
 *  Created on: 23 Jul 2019
 *      Author: joshmurr
 */

#include "particle.h"
#include <stdlib.h>

namespace std {

particle::particle() {
	init();
}

void particle::init() {
	m_x = ((2.0 * rand())/RAND_MAX) - 1;
	m_y = ((2.0 * rand())/RAND_MAX) - 1;
}

void particle::update(int interval) {

	//m_x += NEW LOCATION;
	//m_y += NEW LOCATION;

	/*
	 if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
	 init();
	 }

	 if(rand() < RAND_MAX/100){
	 init();
	 }
	 */
}

} /* namespace std */
