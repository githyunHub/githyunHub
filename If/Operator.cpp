#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//int Number = 0;

	//cin >> Number;

	//if (Number % 2 == 0)
	//{
	//	cout << "¦" << endl;
	//}
	//else
	//{
	//	cout << "Ȧ" << endl;
	//}

	//if�� Ȱ�� ���� ��� ���ϱ�
	/*int Score = 0;
	int Grade = 0;
	Reinput:
	cin >> Score;

	if (90 <= Score && Score <= 100)
	{
		cout << "A �Դϴ�." << endl;
	}
	else if (80 <= Score && Score < 90)
	{
		cout << "B �Դϴ�." << endl;
	}
	else if (70 <= Score && Score < 80)
	{
		cout << "C �Դϴ�." << endl;
	}
	else if (60 <= Score && Score < 70)
	{
		cout << "D �Դϴ�." << endl;
	}
	else if (50 <= Score && Score < 60)
	{
		cout << "E �Դϴ�." << endl;
	}
	else
	{
		cout << "F �Դϴ�." << endl;
	}
	goto Reinput;*/

	//switch�� ����
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



	//���� �ʱ�ȭ, 0 ~ RAND_MAX
	srand(time(NULL));
	//���Ƿ� ��� �迭���
	//for (int i = 0; i < 10; ++i)
	//{
	//	//0 ~ 9
	//	int R = rand() % 10;
	//	//to do
	//}


	//shuffle
	//���� ����

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
	//���
	for (int i = 0; i < 10; i++)
	{
		cout << Number[i] << endl;
	}


	//for (int i = 0; i < 10; i++) 
	//{
	//	printf("���� : %d \n", rand() % 10);
	//}


	// �迭 ���� -> �迭 �ʱ�ȭ -> �迭 ���� -> �迭 ���

	return 0;
}