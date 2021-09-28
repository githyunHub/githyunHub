#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

//1. 빙고판 숫자를 순서대로 넣는다. Initialize
//2. 빙고판에 숫자를 섞는다. Suffle
char Input();

void Process(char Key);
void CustomProcess();

void Render();
void CustomRender();

void Intialize();
void Terminate();

void CustomIntialize();
void CustomTerminate();

void InitializeBingoN();

int bingoN[9];
bool bGameState = true;

int main()
{
	bool bGameState = true;
	Intialize();
	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		Render();
	}
	Terminate();
	return 0;
}

char Input()
{
	char Key;
	cin >> Key;
	//입력 받은 키를 반환한다
	return Key;
}


void Process(char Key)
{
	if (Key == 'q' || Key == 'Q')
	{
		bGameState = false;
	}

	//사용자(개발자)가 구현하는 Process
	CustomProcess();

}
void CustomProcess()
{

}


void Intialize()
{
	//초기화
	CustomIntialize();
}

void Terminate()
{
	//종료
	CustomTerminate();
}

void CustomIntialize()
{
	InitializeBingoN();
}

void CustomTerminate()
{
}

void InitializeBingoN()
{
	for (int i = 0; i < 9; i++)
	{
		bingoN[i] = i + 1;
	}

	srand(static_cast<unsigned int>(time(nullptr)));
	//Shuffle
	for (int i = 0; i < 30; i++)
	{
		//rand
		int Index1 = rand() % 9;
		int Index2 = rand() % 9;

		int Temp = bingoN[Index1];
		bingoN[Index1] = bingoN[Index2];
		bingoN[Index2] = Temp;
	}
}

void Render()
{
	//system("cls"); //콘솔창 clear
	CustomRender();
}
void CustomRender()
{

}