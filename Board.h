#pragma once
#include "game.h"
#include "player.h"

enum piece_type {
	NONE,
	PLAYER1,
	PLAYER2
};

class Board
{
public:
	Board();
	~Board();

private:
	piece_type _board[19][19];
	Player* _player1;
	Player* _player2;
	ModeManager* _mode;
};

