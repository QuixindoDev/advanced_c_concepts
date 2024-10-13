/*
 * =====================================================================================
 *
 *       Filename:  ncurses.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/10/2024 10:02:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eufrásio QUixindo (), eufrasio.dev@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <ncurses.h>

int main()
{
	char letter;
	
	initscr();
	printw("Press any key");
	refresh();

	letter = getch();
	clear();
	printw("You pushed: '%c'", letter);
	refresh();

	getch();
	endwin();

	return 0;
}
