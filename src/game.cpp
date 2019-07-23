/*
 * game.cpp
 *
 *  Created on: 23 Jul 2019
 *      Author: joshmurr
 */

#include "game.h"
#include <iostream>

namespace std {

game::game(const int w, const int h) :
		lastTime(0) {
	width = w;
	height = h;
	m_cells = new unsigned char[width * height];
	m_cells2 = new unsigned char[width * height];

	for (int x = 0; x < width; x++) {
		for (int y = 0; y < height; y++) {
			if(x % 200 == 0 || y % 200 == 0) m_cells[y * width + x] = (2.0 * rand()) / RAND_MAX;
		}
	}
}

game::~game() {
	delete[] m_cells;
}

void game::update(int elapsed) {
	int interval = elapsed - lastTime;

	for (int x = 0; x < width; x++) {
		for (int y = 0; y < height; y++) {
			unsigned char current_state = m_cells[y * width + x];
			int sum = 0;
			for (int x_local = -1; x_local <= 1; x_local++) {
				for (int y_local = -1; y_local <= 1; y_local++) {

					int currentX = x + x_local;
					int currentY = y + y_local;

					if (currentX < 0) {
						currentX = width;
					}
					if (currentX > width) {
						currentX = 0;
					}
					if (currentY < 0) {
						currentY = height;
					}
					if (currentY > height) {
						currentY = 0;
					}

					//if (currentX >= 0 && currentX < width && currentY >= 0 && currentY < height) {
					sum += m_cells[currentY * width + currentX];


				}
			}
			sum -= m_cells[y * width + x];
			if (current_state == 0 && sum == 3) {
				m_cells2[y * width + x] = 1;
			} else if (current_state == 1 && (sum < 2 || sum > 3)) {
				m_cells2[y * width + x] = 0;
			} else {
				m_cells2[y * width + x] = m_cells[y * width + x];
			}

			//m_cells2[y * width + x] = (2.0 * rand()) / RAND_MAX;
		}
	}

	m_cells = m_cells2;

	lastTime = elapsed;
}

} /* namespace std */
