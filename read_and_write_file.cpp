#include "var.h"
#include <stdio.h>

mode readfile(void) {
	FILE *fp; 
	fp = fopen(".\\record.dat", "r");
	int n;
	fscanf(fp, "%d", &n);
	game_status = (status)n;
	for (int i = 0; i < PIECENUM; i++) {
		for (int j = 0; j < PIECENUM; j++) {
			fscanf(fp, "%d", &board[i][j]);
		}
	}
	fscanf(fp, "%d", &n);
	current = (player)n;
	fclose(fp);
	return game_mode;
}
void writefile(void) {
	FILE *fp;
	fp = fopen(".\\record.dat", "w");
	fprintf(fp, "%d\n", (int)game_mode);
	for (int i = 0; i < PIECENUM; i++) {
		for (int j = 0; j < PIECENUM; j++) {
			fprintf(fp, "%d ", board[i][j]);
		}
		fprintf(fp, "\n");
	}
	if (current == right) fprintf(fp, "%d", 1);
	else if (current == left) fprintf(fp, "%d", -1);
	fclose(fp);
}
