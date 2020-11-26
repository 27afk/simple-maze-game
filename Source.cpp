/*
* Maze duck v0.0.1 
* By: /\|_3X
* My yt channel link: https://www.youtube.com/channel/UCmoaa6sZwBYtw83iH5FM-5g?view_as=subscriber
*/

#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define HIGHT 500

using namespace std;

typedef struct {
	int default_pause = 1;
	int level = 1;
	int points = 0;
	int y = 0;
	int x = 10;
	int start_x = 8;
	int start_y = 1;
	int time = 200;
	bool is_dead = false;
	bool resent = false;
	int m_direction = 0;
	char flappy_map[10][20]{
		"*******************",
		"*=======       ====",
		"*===========      *",
		"*===========      *",
		"*=====         ====",
		"*======           *",
		"*=======   ========",
		"*========      ====",
		"*======    ========",
		"*******************" };
	char map_cop[10][20]{
		"*******************",
		"*=======       ====",
		"*===========      *",
		"*===========      *",
		"*=====         ====",
		"*======           *",
		"*=======   ========",
		"*========      ====",
		"*======    ========",
		"*******************" };
}flappy_t;
void exit() {
	exit(1);
}
void print_map(flappy_t flappy) {
	int x;
	int y;
	for (x = 0; x < 10; x++) {
		for (y = 0; y < 20; y++) {
			cout << flappy.flappy_map[x][y];
		}
		cout << endl;
	}
}
void flappy_start() {
	cout << "FLAPPY MAZE1!1!" << endl;
}
void mili_sleep( flappy_t flappy) {
	Sleep(flappy.time);
	cout << "time!";
}
bool dead_alive(flappy_t flappy) {
	if ((flappy.flappy_map[1][1] == 'V') || (flappy.flappy_map[1][2] == 'V') || (flappy.flappy_map[1][3] == 'V') || (flappy.flappy_map[1][4] == 'V')||
		(flappy.flappy_map[1][5] == 'V') || (flappy.flappy_map[1][6] == 'V') || (flappy.flappy_map[1][7] == 'V')|| (flappy.flappy_map[1][17] == 'V') ||
		(flappy.flappy_map[1][18] == 'V')|| (flappy.flappy_map[1][15] == 'V') || (flappy.flappy_map[1][16] == 'V')||(flappy.flappy_map[1][14] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[2][1] == 'V') || (flappy.flappy_map[2][2] == 'V')|| (flappy.flappy_map[2][3] == 'V')|| (flappy.flappy_map[2][4] == 'V')||
		(flappy.flappy_map[2][5] == 'V')|| (flappy.flappy_map[2][6] == 'V')|| (flappy.flappy_map[2][7] == 'V')|| (flappy.flappy_map[2][6] == 'V')||
		(flappy.flappy_map[2][7] == 'V')|| (flappy.flappy_map[2][8] == 'V')|| (flappy.flappy_map[2][9] == 'V')|| (flappy.flappy_map[2][10] == 'V')||
		(flappy.flappy_map[2][11] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[3][1] == 'V') || (flappy.flappy_map[3][2] == 'V') || (flappy.flappy_map[3][3] == 'V') || (flappy.flappy_map[3][4] == 'V') ||
		(flappy.flappy_map[3][5] == 'V') || (flappy.flappy_map[3][6] == 'V') || (flappy.flappy_map[3][7] == 'V') || (flappy.flappy_map[3][6] == 'V') ||
		(flappy.flappy_map[3][7] == 'V') || (flappy.flappy_map[3][8] == 'V') || (flappy.flappy_map[3][9] == 'V') || (flappy.flappy_map[3][10] == 'V') ||
		(flappy.flappy_map[3][11] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[4][1] == 'V') ||(flappy.flappy_map[4][2] == 'V')|| (flappy.flappy_map[4][3] == 'V')|| (flappy.flappy_map[4][4] == 'V')||
		(flappy.flappy_map[4][5] == 'V')|| (flappy.flappy_map[4][15] == 'V')|| (flappy.flappy_map[4][16] == 'V')|| (flappy.flappy_map[4][17] == 'V')||
		(flappy.flappy_map[4][18] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[5][1] == 'V') || (flappy.flappy_map[5][2] == 'V') || (flappy.flappy_map[5][3] == 'V') || (flappy.flappy_map[5][4] == 'V') ||
		(flappy.flappy_map[5][5] == 'V')|| (flappy.flappy_map[5][6] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[6][1] == 'V') || (flappy.flappy_map[6][2] == 'V') || (flappy.flappy_map[6][3] == 'V') || (flappy.flappy_map[6][4] == 'V') ||
		(flappy.flappy_map[6][5] == 'V') || (flappy.flappy_map[6][6] == 'V') || (flappy.flappy_map[6][7] == 'V') || (flappy.flappy_map[6][11] == 'V') || (flappy.flappy_map[6][12] == 'V') ||
		(flappy.flappy_map[6][13] == 'V') || (flappy.flappy_map[6][14] == 'V') || (flappy.flappy_map[6][15] == 'V')||(flappy.flappy_map[6][16] == 'V')||
		(flappy.flappy_map[6][17] == 'V') || (flappy.flappy_map[6][18] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[7][1] == 'V') || (flappy.flappy_map[7][2] == 'V') || (flappy.flappy_map[7][3] == 'V') || (flappy.flappy_map[7][4] == 'V') ||
		(flappy.flappy_map[7][5] == 'V') || (flappy.flappy_map[7][6] == 'V') || (flappy.flappy_map[7][7] == 'V')|| (flappy.flappy_map[7][8] == 'V') ||
		(flappy.flappy_map[7][15] == 'V')||(flappy.flappy_map[7][16] == 'V')||(flappy.flappy_map[7][17] == 'V')||(flappy.flappy_map[7][18] == 'V')) {
		return true;
	}
	else if ((flappy.flappy_map[8][1] == 'V') || (flappy.flappy_map[8][2] == 'V') || (flappy.flappy_map[8][3] == 'V') || (flappy.flappy_map[8][4] == 'V') ||
		(flappy.flappy_map[8][5] == 'V') || (flappy.flappy_map[8][6] == 'V')||(flappy.flappy_map[8][11] == 'V')||
		(flappy.flappy_map[8][12] == 'V')||(flappy.flappy_map[8][13] == 'V')||(flappy.flappy_map[8][14] == 'V')||(flappy.flappy_map[8][15] == 'V')||
		(flappy.flappy_map[8][16] == 'V')||(flappy.flappy_map[8][17] == 'V')||(flappy.flappy_map[8][18] == 'V')) {
		return true;
	}
	else {
		return false;
	}
}
void restart(flappy_t flappy) {
	if (flappy.is_dead == true) {
		system("CLS");
		cout << "YOU DIEED"<<endl;
		mili_sleep(flappy);
		mili_sleep(flappy);
		mili_sleep(flappy);
		mili_sleep(flappy);
		mili_sleep(flappy);
		mili_sleep(flappy);
		mili_sleep(flappy);
		exit();
	}
	else if (flappy.is_dead == false) {
		flappy.points++;
	}
	else {
	}
}
int flappy_move(flappy_t flappy) {
	char c;
	switch ((c = _getch())) {
	case KEY_UP:
		return 1;
		break;
	case KEY_DOWN:
		return 2;
		break;
	case KEY_LEFT:
		return 3;
		break;
	case KEY_RIGHT:
		return 4;
		break;
	}
}

void FLappy_run( flappy_t flappy){
	for (;;) {
		char c;
		flappy.is_dead = dead_alive(flappy);
		restart(flappy);
		flappy.flappy_map[flappy.start_y][flappy.start_x] = 'V';
		print_map(flappy);
		flappy.m_direction = flappy_move(flappy);
		if (flappy.m_direction == 1) {
			flappy.flappy_map[flappy.start_y][flappy.start_x] = flappy.map_cop[flappy.start_y][flappy.start_x];
			flappy.start_y--;
		}
		if (flappy.m_direction == 2) {
			flappy.flappy_map[flappy.start_y][flappy.start_x] = flappy.map_cop[flappy.start_y][flappy.start_x];
			flappy.start_y++;
		}
		if (flappy.m_direction == 3) {
			flappy.flappy_map[flappy.start_y][flappy.start_x] = flappy.map_cop[flappy.start_y][flappy.start_x];
			flappy.start_x--;
		}
		if (flappy.m_direction == 4) {
			flappy.flappy_map[flappy.start_y][flappy.start_x] = flappy.map_cop[flappy.start_y][flappy.start_x];
			flappy.start_x++;
		}
		if (flappy.start_y == 9) {
			system("CLS");
			cout << "YOU  HAVE RESCUED THE BIRD FROM THE MAZE!! YEAH!" << endl;
			Sleep(5000);
			exit();
		}
		system("CLS");
	}
}

int main()
{
	flappy_t flappy;
	FLappy_run(flappy);
}