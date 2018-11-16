#pragma once
#include "game.h"

enum player_type {
	PLAYER1,
	PLAYER2
};



class Player
{
public:
	Player();
	~Player();
	struct move get_move(Board* board);
private:
	
};

