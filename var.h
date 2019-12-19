#ifndef HEAD_H_ 
#define HEAD_H_
#define _CRT_SECURE_NO_WARNINGS
#define WIDTH 800
#define HEIGHT 800
#define PIECENUM 20
#define SIDE (WIDTH / PIECENUM)
#define DEPTH 4
#include <graphics.h>
extern int finish;
extern int board[PIECENUM][PIECENUM];
enum player { left = -1, right = 1 };
extern player current;
enum mode { twop, ai_simple, ai_middle, ai_hard };
extern mode game_mode;
enum status { init, gaming, save_and_quit, pause = 27 };
extern status game_status;
struct ball {
	int x;
	int y;
	int radius;
};
extern ball piece;

#endif
