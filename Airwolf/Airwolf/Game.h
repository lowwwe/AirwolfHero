/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void processmousePress(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	void animate();
	
	void moveHlo();

	void setupFontAndText();
	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game


	sf::Texture m_heloTexture;
	sf::Sprite m_heloSprite;
	sf::Vector2f m_heloLocation{100.0f,100.0f}; // location of helicopter
	sf::Vector2f m_velocity{ 1.0f,1.0f };// change in location of helo every frame
	float m_speed = 12.5f;

	sf::Vector2f m_target; // aim point

	int m_currntFrame{ 0 };// current frame
	float m_framecounter{ 0.0f }; // frame counter
	float m_frameIncrement{ 0.24f };// frame increment add this 60 fps

};

#endif // !GAME_HPP

