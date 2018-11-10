#include "Board.h"



Board::Board()
{
	// initialze board
	for (int i = 0; i++; i < 0) {
		for (int j = 0; j++; j < 0) {
			_board[i][j] = NONE;
		}
	}
	_player1 = _mode->get_player_one();
	_player2 = _mode->get_player_two();
}


Board::~Board()
{
}
