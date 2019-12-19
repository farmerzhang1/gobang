#include "var.h"
#include <conio.h>
mode readfile(void);
void writefile(void);
void startup(void);
void pause_menu(void) {
	clearrectangle(0, 0, WIDTH - 1, HEIGHT - 1);
	outtextxy(WIDTH / 3, HEIGHT * 3 / 10, "press one to quit (and save the process)");
	outtextxy(WIDTH / 3, HEIGHT * 4 / 10, "press two to start new game");
	outtextxy(WIDTH / 3, HEIGHT * 5 / 10, "press three to resume");
	FlushBatchDraw();
	if (_kbhit()) {
		int input;
		input = _getch() - '0';
		if (input == 1) {
			writefile();
			game_status = save_and_quit;
		}
		else if (input == 2) {
			game_status = init;//restart
			startup();
		}
		else if (input == 3) {
			game_mode = readfile();
		}
	}
}
