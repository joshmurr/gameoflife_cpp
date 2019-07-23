#include <iostream>
#include <SDL.h>
#include <math.h>
#include <stdlib.h>
#include "screen.h"
#include "game.h"
using namespace std;

int main() {
	screen screen;

	if (!screen.init()) {
		cout << "Error initializing SDL..." << endl;
	}

	game game(screen::SCREEN_WIDTH, screen::SCREEN_HEIGHT);
	//game.init();

	while (true) {
		int elapsed = SDL_GetTicks();

		game.update(elapsed);

		unsigned char *cell = game.getCells();
		int width = game.getWidth();
		int height = game.getHeight();
		for (int x = 0; x < width; x++) {
			for (int y = 0; y < height; y++) {
				unsigned char color = cell[y * width + x] * 255;


				screen.setPixel(x, y, color, color, color);
			}
		}

		game.update(elapsed);

		screen.update();

		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();

	return 0;
}
