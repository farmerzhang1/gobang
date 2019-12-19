#include "var.h"
#include <conio.h>
void pause_menu(void);
void writefile(void);
void with_input(void) {
	if (game_mode == twop) {
		MOUSEMSG mouse;
		while (MouseHit()) {
			mouse = GetMouseMsg();
			int piece_x = mouse.x / SIDE;
			int piece_y = mouse.y / SIDE;
			if (mouse.uMsg == WM_MOUSEMOVE) {
				piece_x = mouse.x / SIDE;
				piece_y = mouse.y / SIDE;
			}
			else if (mouse.uMsg == WM_LBUTTONDOWN) {
				if (board[piece_y][piece_x] == 0) {
					board[piece_y][piece_x] = current;
					if (current == left) current = right;
					else if (current == right) current = left;
				}
			}
		}
	}
	else {
		ai();
	}
	if (_kbhit()) {
		int input;
		input = _getch();
		if (input == pause) {
			game_status = pause;
			writefile();
			while (game_status == pause) {
				pause_menu();
			}
		}
	}
}
