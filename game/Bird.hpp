#pragma once

#include <SFML/Graphics.hpp>
#include "Definitions.hpp"
#include "Game.hpp"
#include <vector>

namespace FlappyBird {
	class Bird {
	public:
		Bird(GameDataRef data);

		void draw();
		void animate(float dt);
		void update(float dt);
		void tap();

	private:
		GameDataRef _data;
		sf::Sprite _sprite;
		std::vector<sf::Texture> _animationFrames;
		unsigned int _animationIterator;
		sf::Clock _clock;
		sf::Clock _movementClock;

		int _state;

		float _rotation;
	};
}