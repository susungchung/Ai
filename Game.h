#pragma once
#include "Board.h"

class Game
{
public:
	Game();
	~Game();
	
private:
	bool is_over();
	int turn;
	Board* board;
};

