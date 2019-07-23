/*
 * particle.h
 *
 *  Created on: 23 Jul 2019
 *      Author: joshmurr
 */

#ifndef SRC_PARTICLE_H_
#define SRC_PARTICLE_H_

namespace std {

class particle {
public:
	double m_x;
	double m_y;
public:
	particle();
	void init();
	void update(int interval);
};

} /* namespace std */

#endif /* SRC_PARTICLE_H_ */
