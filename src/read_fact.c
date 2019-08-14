#include "header.h"

void read_fact() {
	char buff[] = "\0";
	int file = 0;

	srand(time(NULL));
	int r = rand() % 1000 % 7 + 1;
	char name[14] = "src/txt/X.txt\0";
	name[8]= r + 48;
	file = open(name, O_RDONLY);
	while(read(file, &buff, 1)) {
		printw("%s",buff);
		usleep(30000);
		refresh();

    }
  sleep(7);
}
