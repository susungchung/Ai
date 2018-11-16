#include "Game.h"



Game::Game()
{
	_board = new Board();
	mode = new ModeManager();
}


Game::~Game()
{
	delete _board;
	delete mode;
}

bool Game::is_over() {
	return false;
}

struct move Game::get_move() {
	return _cur_player->get_move(_board);
}