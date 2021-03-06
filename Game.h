#ifndef GAME_H
#define GAME_H

#include "SFML/Graphics.hpp"

#include "StateMachine.h"
#include "TutorialLevelState.h"

class Game {
	public:
		Game() = default;
		
		void run();

	private:
		StateMachine machine;
		sf::RenderWindow window;
};

#endif