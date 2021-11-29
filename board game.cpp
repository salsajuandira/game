#include <iostream>
#include <ncurses.h>
using namespace std;

int main(int argc, char **argv){
	initscr();
	noecho();
	curs_set(0);
	
	int yMax, xMax;
	getmaxyx(stdscr, yMax, xMax);
	
	WINDOW *win = newwin(yMax/2, xMax/2, yMax/4, xMax/4);
	box(board_win, 0, 0);
	
	mvwprintw(board_win, 0, 20, " Snake Game by kel. ");
	
	char ch;
	while (ch=wgetch(board_win)){
	}
	
	endwin();
	return 0;
}

