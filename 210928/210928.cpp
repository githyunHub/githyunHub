#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

//Game engine
//사용자 입력을 받는다.// Input
//물체를 배치한다.// Process
//그림을 그린다. (가상공간에서 사진 찍는다.) // Render

char Input();
void Process(char Key);
void Render();
//개발자가 구현하는 Process
void CustomProcess(char Key);
//개발자가 구현하는 Render
void CustomRender();

int Gold = 0;

bool bGameState = true;

int main()
{
	while (bGameState)
	{
		char Key = Input();
		Process(Key);
		Render();
	}
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
	CustomProcess(Key);

}

void Render()
{
	system("cls"); //콘솔창 clear
	cout << "그린다." << endl;
	CustomRender();
}

void CustomProcess(char Key)
{
	if (Key == 'g' || Key == 'G')
	{
		Gold++;
	}
}

void CustomRender()
{
	cout << "Gold : " << Gold << endl;
}