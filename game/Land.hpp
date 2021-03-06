#pragma once

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <vector>

namespace FlappyBird {
	class Land {
	public:
		Land(GameDataRef data);

		void moveLand(float dt, float speedfactor);

		void drawLand();

		const std::vector<sf::Sprite>& getSprites() const;
	private:
		GameDataRef _data;
		std::vector<sf::Sprite>_sprites;
	};
}