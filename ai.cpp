#include "var.h"
void ai(void) {
	;
}
int killed(player Nowplayer, int depth) {
	;
}
int min_max(player Nowplayer, int depth, int alpha, int beta) {
	int score, NumOfAva;
	if (depth >= DEPTH) {
		return killsearch(Nowplayer, depth, alpha, beta);
	}
	int flag;
	flag = killed(Nowplayer, depth);
	if (flag) return flag;


}
