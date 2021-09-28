#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

//1. ������ ���ڸ� ������� �ִ´�. Initialize
//2. �����ǿ� ���ڸ� ���´�. Suffle
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
	//�Է� ���� Ű�� ��ȯ�Ѵ�
	return Key;
}


void Process(char Key)
{
	if (Key == 'q' || Key == 'Q')
	{
		bGameState = false;
	}

	//�����(������)�� �����ϴ� Process
	CustomProcess();

}
void CustomProcess()
{

}


void Intialize()
{
	//�ʱ�ȭ
	CustomIntialize();
}

void Terminate()
{
	//����
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
	//system("cls"); //�ܼ�â clear
	CustomRender();
}
void CustomRender()
{

}