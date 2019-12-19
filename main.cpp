#include <stdio.h>
#include "var.h"
void startup(void);
void show(void);
void with_input(void);
void without_input(void);

int main(void) {
	startup();
	while (!finish) {
		show();
		with_input();
		without_input();
	}
}

