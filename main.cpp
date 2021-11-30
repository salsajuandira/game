#include <ncurses.h>
#include "board.h"

#define BOARD_DIM 18
#define BOARD_ROWS BOARD_DIM
#define BOARD_COLUMS BOARD_DIM * 2.5


int main(int argc, char **argv){
	initscr();
	refresh();
	
	int xMax, yMax;
	getmaxyx(stdscr, yMax, xMax);
	
	WINDOW *board_win = newwin (BOARD_ROWS, BOARD_COLUMS, (yMax/2)-(BOARD_ROWS/2), (xMax/2)-(BOARD_COLUMS /2));
	box(board_win, 0, 0);
	wrefresh(board_win);
	
	getch();
	endwin();
	
	return 0;
	
}







