/*
 * game.h
 *
 *  Created on: 23 Jul 2019
 *      Author: joshmurr
 */

#ifndef SRC_GAME_H_
#define SRC_GAME_H_

#include "particle.h"
#include "screen.h"

namespace std {

class game {
private:
	int width;
	int height;
	unsigned char *m_cells;
	unsigned char *m_cells2;
	int lastTime;
public:
	game(const int w, const int h);
	virtual ~game();
	void update(int elapsed);

	unsigned char *getCells() {
		return m_cells;
	}
	int getWidth(){
		return width;
	}
	int getHeight(){
		return height;
	}
};

} /* namespace std */

#endif /* SRC_GAME_H_ */
