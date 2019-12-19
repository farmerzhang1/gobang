#include "var.h"
int finish = 0;
int board[PIECENUM][PIECENUM];
player current;
status game_status;
ball piece;
mode game_mode;
void start_menu(void);
void startup(void) {
	int i, j;
	for (i = 0; i < PIECENUM; i++) {
		for (j = 0; j < PIECENUM; j++) {
			board[i][j] = 0;
		}
	}
	current = left;
	game_status = init;
	piece.radius = SIDE / 3;
	initgraph(WIDTH, HEIGHT);
	BeginBatchDraw();
	while (game_status == init) {
		start_menu();
	}
}
