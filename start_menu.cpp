#include <stdio.h>
#include "var.h"
#include <conio.h>
//status game_status;
mode readfile(void);
void writefile(void);
void start_menu(void) {
	setbkcolor(WHITE);
	settextcolor(RED);
	outtextxy(WIDTH * 3 / 10, HEIGHT * 5 / 10, "press one to enter PK mode");
	outtextxy(WIDTH * 3 / 10, HEIGHT * 6 / 10, "press two to enter simple AI mode");
	outtextxy(WIDTH * 3 / 10, HEIGHT * 7 / 10, "press three to enter middle AI mode");
	outtextxy(WIDTH * 3 / 10, HEIGHT * 8 / 10, "press four to enter hard AI mode");
	outtextxy(WIDTH * 3 / 10, HEIGHT * 9 / 10, "press five to load previous game");
	FlushBatchDraw();
	if (_kbhit()) {
		int input = _getch() - '0';//from ASCII to int
		if (input == 1) {
			game_mode = twop;
			game_status = gaming;
		}
		else if (input == 2) {
			game_mode = ai_simple;
			game_status = gaming;
		}
		else if (input == 3) {
			game_mode = ai_middle;
			game_status = gaming;
		}
		else if (input == 4) {
			game_mode = ai_hard;
			game_status = gaming;
		}
		else if (input == 5) {
			game_mode = readfile();
			game_status = gaming;
		}
	}
}
