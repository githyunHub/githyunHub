﻿#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

void Input();
void Process();
void Draw();
void MovePlayer(int XDirection, int YDirection);

bool IsGoal();

void ChangeColor(int color);

//1. 지도를 초기화 한다.
int Map[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,1,0,0,0,0,0,1},
	{1,0,0,1,0,0,0,0,0,1},
	{1,0,0,1,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,1,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,0,1},
	{1,0,0,0,1,0,0,0,9,1},
	{1,1,1,1,1,1,1,1,1,1}
};

int PlayerX = 1;
int PlayerY = 1;
bool bIsRunning = true;
int Key;

int main()
{
	while (bIsRunning)
	{
		//2. input.
		Input();
		//3. process. (move player)
		Process();
		//4. output.
		Draw();
	}
	return 0;
}

void Input()
{
	Key = _getch();
	if (Key == 0x00 || Key == 0xE0)
	{
		Key = _getch();
	}
}

void Process()
{
	switch (Key)
	{
		case 'W':
		case 'w':
		{
			MovePlayer(0, -1);
			break;
		}
		case 'S':
		case 's':
		{
			MovePlayer(0, 1);
			break;
		}
		case 'A':
		case 'a':
		{
			MovePlayer(-1, 0);
			break;
		}
		case 'D':
		case 'd':
		{
			MovePlayer(1, 0);
			break;
		}
		case 'Q':
		case 'q':
		{
			bIsRunning = false;
			break;
		}
	}
	if (IsGoal())
	{
		bIsRunning = false;
	}
}

bool IsGoal()
{
	return Map[PlayerY][PlayerX] == 9 ? true : false;
	//if (Map[PlayerY][PlayerX] == 9)
	//{
	//	return true;
	//}
}

void Draw()
{
	//화면을 지운다.,
	system("cls");
	for (int Y = 0; Y < 10; Y++)
	{
		for (int X = 0; X < 10; X++)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				ChangeColor(171);
				cout << " " << " ";
				ChangeColor(7);
			}
			else if (Map[Y][X] == 0)
			{
				cout << " " << " ";
			}
			else if (Map[Y][X] == 1)
			{
				cout << "X" << " ";
			}
			else if (Map[Y][X] == 9)
			{
				ChangeColor(86);
				cout << " " << " ";
				ChangeColor(7);
			}
		}
		cout << endl;
	}
}
void MovePlayer(int XDirection, int YDirection)
{
	//새로 가볼곳 계산
	int NewPlayerX = PlayerX + XDirection;
	int NewPlayerY = PlayerY + YDirection;

	//미리 가봄
	if (Map[NewPlayerY][NewPlayerX] == 0 ||
		Map[NewPlayerY][NewPlayerX] == 9)
	{
		//이동
		PlayerX = NewPlayerX;
		PlayerY = NewPlayerY;
	}
	else if (Map[NewPlayerY][NewPlayerX] == 1)
	{
		bIsRunning = false;
	}
}

void ChangeColor(int Color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}