#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "Definitions.hpp"

int main()
{
	FlappyBird::Game(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_NAME);
	return EXIT_SUCCESS;
}