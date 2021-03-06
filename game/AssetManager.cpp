#include "AssetManager.hpp"

namespace FlappyBird {
	void AssetManager::loadTexture(std::string name, std::string fileName) {
		sf::Texture texture;

		if (texture.loadFromFile(fileName)) {
			this->_textures[name] = texture;
		}
	}

	sf::Texture& AssetManager::getTexture(std::string name) {
		return this->_textures.at(name);
	}

	void AssetManager::loadFont(std::string name, std::string fileName) {
		sf::Font texture;

		if (texture.loadFromFile(fileName)) {
			this->_fonts[name] = texture;
		}
	}

	sf::Font& AssetManager::getFont(std::string name) {
		return this->_fonts[name];
	}


	void AssetManager::loadSound(std::string name, std::string fileName) {
		sf::SoundBuffer sound;

		if (sound.loadFromFile(fileName)) {
			this->_sounds[name] = sound;
		}
	}

	sf::SoundBuffer& AssetManager::getSound(std::string name) {
		return this->_sounds[name];
	}
}