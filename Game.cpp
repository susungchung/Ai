#include "Game.h"



Game::Game()
{
	board = new Board();
}


Game::~Game()
{
}

bool Game::is_over() {
	return false;
}