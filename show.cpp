#include "var.h"

void show(void) {
	clearrectangle(0, 0, WIDTH - 1, HEIGHT - 1);
	setbkcolor(WHITE);
	for (int i = 0; i < PIECENUM; i++) {
		for (int j = 0; j < PIECENUM; j++) {
			piece.y = i * SIDE + SIDE / 2;
			piece.x = j * SIDE + SIDE / 2;
			if (board[i][j] == left) {
				setcolor(GREEN);
				setfillcolor(GREEN);
				fillcircle(piece.x, piece.y, piece.radius);
			}
			else if (board[i][j] == right) {
				setcolor(RED);
				setfillcolor(RED);
				fillcircle(piece.x, piece.y, piece.radius);
			}
		}
		setlinecolor(BLACK);
		line(i * SIDE, 0, i * SIDE, HEIGHT);
		line(0, i * SIDE, WIDTH, i * SIDE);
	}
	FlushBatchDraw();
}
