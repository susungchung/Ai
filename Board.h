#pragma once

enum player {
	PLAYER1,
	PLAYER2
};

class Board
{
public:
	Board();
	~Board();

private:
	int _board[19][19];
};

