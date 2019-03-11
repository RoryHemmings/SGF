#pragma once

#ifndef GAURD_GAME_H
#define GAURD_GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "States/State.h"
#include "States/GameState.h"

class Game
{

public:
	// Constructors
	Game(int, int, int);
	Game(int width, int height) : Game(width, height, 60) {}

	// Thread Functions
	void run();

	// Loop Functions
	void load();
	void tick();
	void render();

	//Getters and Setters
	int getWidth() const { return width; }
	int getHeight() const { return height; }
	int getFps() const { return fps; }

	State* getCurrentState() const { return currentState; }

	void setFps(int n) { fps = n; }
	void setCurrentState(State& s) { currentState = &s; }

private:
	// Member Functions
	int width, height;
	int fps;

	// Display
	sf::RenderWindow display;

	// States
	State* currentState;

};

#endif