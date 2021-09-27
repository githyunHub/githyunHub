#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//int Number = 0;

	//cin >> Number;

	//if (Number % 2 == 0)
	//{
	//	cout << "짝" << endl;
	//}
	//else
	//{
	//	cout << "홀" << endl;
	//}

	//if문 활용 성적 등급 구하기
	/*int Score = 0;
	int Grade = 0;
	Reinput:
	cin >> Score;

	if (90 <= Score && Score <= 100)
	{
		cout << "A 입니다." << endl;
	}
	else if (80 <= Score && Score < 90)
	{
		cout << "B 입니다." << endl;
	}
	else if (70 <= Score && Score < 80)
	{
		cout << "C 입니다." << endl;
	}
	else if (60 <= Score && Score < 70)
	{
		cout << "D 입니다." << endl;
	}
	else if (50 <= Score && Score < 60)
	{
		cout << "E 입니다." << endl;
	}
	else
	{
		cout << "F 입니다." << endl;
	}
	goto Reinput;*/

	//switch문 예시
	//switch (Score / 10)
	//{
	//	case 10:
	//	case 9:
	//	{
	//		Grade = 'A';
	//		break;
	//	}
	//	case 8:
	//	{
	//		Grade = 'B';
	//		break;
	//	}
	//	case 7:
	//	{
	//		Grade = 'C';
	//		break;
	//	}
	//}

	//initialize
	int Number[10];
	for (int i = 0; i < 10; i++)
	{
		Number[i] = i + 1;
	}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << Number[i] << endl;
	//}



	//난수 초기화, 0 ~ RAND_MAX
	srand(time(NULL));
	//임의로 출력 배열출력
	//for (int i = 0; i < 10; ++i)
	//{
	//	//0 ~ 9
	//	int R = rand() % 10;
	//	//to do
	//}


	//shuffle
	//숫자 섞기

	for (int i = 0; i < 10; i++)
	{
		int R = rand() % 10;
		int R2 = rand() % 10;
		int Temp = Number[R];
		Number[R] = Number[R2];
		Number[R2] = Temp;
	}

	//for (int i = 0; i < 10; i++)
	//{
	//	//0 ~ 9
	//	int R = rand() % 10;
	//	//to do
	//	int shu = 0;
	//	shu = Number[i];
	//	Number[i] = Number[R];
	//	Number[R] = shu;
	//}
	
	//display
	//출력
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}


	//for (int i = 0; i < 10; i++) 
	//{
	//	printf("난수 : %d \n", rand() % 10);
	//}


	// 배열 생성 -> 배열 초기화 -> 배열 섞기 -> 배열 출력

	return 0;
}