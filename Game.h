#pragma once
#include "Board.h"

/*
	mode_types
	MODE1: player vs player
*/
enum mode_types {
	MODE1  // PERSON VS PERSON
};

struct move {
	unsigned int row_num;
	unsigned int col_num;
	piece_type piece;
};


class Game
{
public:
	Game();
	~Game();

	ModeManager* mode;
	
private:
	bool is_over();
	struct move get_move();

	int _turn;
	Player* _cur_player;
	Board* _board;
};

class ModeManager{
public:
	ModeManager();
	~ModeManager();
	mode_types mode_type;
	Player* get_player_one();
	Player* get_player_two();
};
