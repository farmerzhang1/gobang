#include "var.h"
void without_input(void) {
	for (int i = 2; i < PIECENUM - 2; i++) {
		for (int j = 2; j < PIECENUM - 2; j++) {
			if (board[i][j] == left) {
				if (board[i][j - 1] == left && board[i][j - 2] == left
					&& board[i][j + 1] == left && board[i][j + 2] == left) {
					finish = left;
					return;
				}
				else if (board[i + 1][j] == left && board[i + 2][j] == left
					&& board[i - 1][j] == left && board[i - 2][j] == left) {
					finish = left;
					return;
				}
				else if (board[i + 1][j + 1] == left && board[i + 2][j + 2] == left
					&& board[i - 1][j - 1] == left && board[i - 2][j - 2] == left) {
					finish = left;
					return;
				}
				else if (board[i - 1][j + 1] == left && board[i - 2][j + 2] == left
					&& board[i + 1][j - 1] == left && board[i + 2][j - 2] == left) {
					finish = left;
					return;
				}
			}
			else if (board[i][j] == right) {
				if (board[i][j - 1] == right && board[i][j - 2] == right
					&& board[i][j + 1] == right && board[i][j + 2] == right) {
					finish = right;
					return;
				}
				else if (board[i + 1][j] == right && board[i + 2][j] == right
					&& board[i - 1][j] == right && board[i - 2][j] == right) {
					finish = right;
					return;
				}
				else if (board[i + 1][j + 1] == right && board[i + 2][j + 2] == right
					&& board[i - 1][j - 1] == right && board[i - 2][j - 2] == right) {
					finish = right;
					return;
				}
				else if (board[i - 1][j + 1] == right && board[i - 2][j + 2] == right
					&& board[i + 1][j - 1] == right && board[i + 2][j - 2] == right) {
					finish = right;
					return;
				}
			}
		}
	}
	if (game_status == save_and_quit) {
		closegraph();
		finish = 2;
	}
}
