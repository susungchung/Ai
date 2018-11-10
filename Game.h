#pragma once
#include "Board.h"

class Game
{
public:
	Game();
	~Game();

	ModeManager* mode;
	
private:
	bool is_over();
	int turn;
	Board* board;
};

enum mode_types {
	MODE1
};

class ModeManager{
public:
	ModeManager();
	~ModeManager();
	mode_types mode_type;
	Player* get_player_one();
	Player* get_player_two();
};
