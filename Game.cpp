#include "Game.h"



Game::Game()
{
	board = new Board();
	mode = new ModeManager();
}


Game::~Game()
{
	delete board;
	delete mode;
}

bool Game::is_over() {
	return false;
}