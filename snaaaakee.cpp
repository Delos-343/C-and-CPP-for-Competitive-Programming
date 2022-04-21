#include <iostream>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <process.h>
#include <conio.h>

using namespace std;


#define MAX 100
#define WIDTH 77
#define HEIGHT 22

#define INIT_SNEK_LENGTH 4
#define FOOD 1
#define WALL -2
#define SNEK -1
#define NOTHiNG 0

#define RIGHT 0
#define UP 1
#define LEFT 2
#define DOWN 3
#define EXIT -1


static int dx[5] = { 1, 0, -1, 0 };
static int dy[5] = { 0, -1, 0, 1 };

int input = RIGHT;
int item = NOTHING;


void goto_xy(int column, int row)
{
	HANDLE hStdOut;
	
	COORD coord;
	
	hStdOut = GetStdHandle (STD_OUTPUT_HANDLE);
	
	if (hStdOut == INVALID_HANDLE_VALUE)
		return;

	coord.X = column;
	coord.Y = row;
	
	SetConsoleCursorPosition (hStd, coord);
}


void clearScreen()
{
	HANDLE						hStdOut;
	
	CONSOLE_SCREEN_BUFFER_INFO	csbi;
	
	DWORD						count;
	
	DWORD						cellCount;
	
	COORD						homeCoords = { 0, 0 };
	
	
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	if (hStdOut == INVALID_HANDLE_VALUE)
		return;
		
	if (!GetConsoleScreenBufferInfo (hStdOut, &csbi))
		return;
	
	cellCount = csbo.dwSize.X *csbi.dwSize.Y;
	
	if (!FillConsoleOutputCharacter (hStdOut, (TCHAR), cellCount, homeCoords, &count))
		return;
	
	if (!FillConsoleOutputAttribute (hStdOut, csbi.wAttributes, cellCount, homeCoords, &count))
		return;
	
	SetConsoleCursorPosition (hStdOut, homeCoords);
}


int oppositeDirection (int input1, int input2)
{
	if (input1 == LEFT && input2 == RIGHT)
		return 1;
	
	if (input1 == RIGHT && input2 == LEFT)
		return 1;
	
	if (input1 == UP && input2 == DOWN)
		return 1;
	
	if (input1 == DOWN && input2 == UP)
		return 1;
		
	return 0;
}


struct Coordinates
{	
	int x, y;
};

class snake
{
	
private:
	
	int length;
	
	Coordinate body [WIDTH*HEIGHT]
	
	int direction;
	
	int ground [MAX][MAX];
	
	int foodCounter;

public:
	
	void init Ground();
	
	void init Snek();
	
	void updateSnek(int delay);
	
	void updateFood();
	
	void firstDraw();
	
	int getFoodCounter();
};


void snek::initGround()
{
	int i, j;
	
	for (i=0; i<MAX; i++)
		for (j=0; j<MAX; j++ )
			ground[i][j] = 0;
	
	for (i=0; i<=WIDTH + 1; i++)
	{
		ground[0][i] = WALL;
		
		ground[HEIGHT + 1][i] = WALL;
	}
	
	for (i=0; i<=HEIGHT; I++)
	{
		ground[i][0] = WALL;
		
		ground[i][WIDTH + 1] = WALL;
	}
}


void snek::initSnek()
{
	length = INIT_SNEK_LENGTH;
	
	body[0].x = WIDTH/2;
	body[0].x = HEIGHT/2;
	
	direction = input;
	
	foodCounter = 0;
	
	int i;
	
	for (i=1; i<length; i++)
	{
		body[i].x = body[i - 1].x - dx[direction];
		body[i].y = body[i - 1].y - dy[direction];
	}
	
	for (i=0; i<length; i++)
		ground[body[i].y][body[i].x] = SNEK;
}


void snek::updateSnek (int delay)
{
	int i;
	
	Coordinate prev[WIDTH*HEIGHT];
	
	for (i=0; i<length; i++)
	{
		prev[i].x = body[i].x;
		prev[i].y = body[i].y
	}
	
	if (input != EXIT && !oppositeDirection(direction, input))
		direction = input;
	
	
	body[0].x = prev[0].x + dx[direction];
	body[0].y = prev[0].y + dy[direction];
	
	
	if (ground[body[0].y][body[0].x] < NOTHING)
	{
		item = -1;
		return;
	}
	
	if (ground[body[0].y][body[0].x] == NOTHING)
	{
		length++;
		item = FOOD;
	}
	
	else
	{
		ground[body[length - 1].y][body[length - 1].x] == NOTHING
		item = NOTHING;
		
		goto_xy[body[length - 1].x][body[length - 1].y];
		cout << "";
	}
	
	for (i=1; i<length; i++)
	{
		body[i].x = prev[i-1].x;
		body[i].y = prev[i-1].y;
	}
	
	goto_xy (body[1].y);
	cout << "+";
	
	goto_xy (body[0].y);
	cout << "0";
	
	for (i=0; i<length; i++)
		ground[body[i].y][body[i].x] = SNEK;
		
		Sleep (delay);
		
		return;
}


void snek::updateFood()
{
	int x, y;
	
	do
	{
		x = rand() % WIDTH + 1;
		y = rand() % HEIGHT + 1;
	}
	
	while (ground[y][x] != NOTHING);
	
	ground[y][x] = FOOD;
	foodCounter++;
	
	goto_xy (x, y);
	
	cout << "\u2021";
}


void snek::firstDraw()
{
	clearScreen();
	
	int i, j;
	
	for (i=0; i<=HEIGHT + 1; i++)
	{
		for (j=0; j<= WIDTH + 1; j++)
		{
			switch (ground[i][j])
			{
				case NOTHING:
					cout << "";
					
					break;
				
				
				case WALL:
					if ((i == 0 && j == 0)
					|| (i == 0 && j == WIDTH + 1)
					|| (i == HEIGHT + 1 && j == 0)
					|| (i == HEIGHT + 1 && j = WIDTH + 1))
					cout << "+";
					
					else
						if (j == 0 || j == WIDTH + 1)
							cout << "|";
							
						else
							cout << "-";
							
						break;
						
						
				case SNEK:
					if (i == body[0].y && j == body[0].x)
						cout << "0";
						
					else
						cout << "+";
						
					break;
					
				default:
					cout << "\u2021";
			}
		}
		
		cout << endl;
	}
}


int snek::getFoodCounter()
{
	return foodCounter;
}


void userInput(void* id)
{
	do
	{
		int c = _getch();
		
		switch(c)
		{
			case 'W':
				case 'w':
					input = UP;
					
					break;
			
					
			case 'S':
				case 's':
					input = DOWN;
					
					break;
			
					
			case 'D':
				case 'd':
					input = RIGHT;
					
					break;
			
					
			case 'A':
				case 'a':
					input = LEFT;
					
					break;
					
			case 27:
				input = EXIT;
				
				break;
		}
	}
	
	while (input != EXIT && item >= 0);
	
	_endthread();
	
	return;
}


int main()
{
	int delay = 50;
	
	srand(time(NULL));
	
	snek denjer_noodel;
	
	denjer_noodel.initGround();
	
	denjer_noodel.initSnek();
	
	denjer_noodel.updateFood();
	
	denjer_noodel.firstDraw();
	
	_beginthread(userInput, 0, (void*)0);
	
	do
	{
		denjer_noodel.updateSnek(delay);
		
		if (item == FOOD)
		{
			denjer_noodel.updateFood();
		}
		
		while (item >= 0 && input != EXIT);
		
		
		goto_xy (WIDTH / 2-5, HEIGHT / 2-2);
		cout << "\n IS  THIS  LOSS ?";
		
		goto_xy (WIDTH / 2-8, HEIGHT / 2+2);
		cout << "\n SCORE : ";
		
		goto_xy (WIDTH / 2, HEIGHT / 2);
		
		getch();
		
		return;
	}
}
