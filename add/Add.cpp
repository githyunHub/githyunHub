#include <iostream>
#include "Util.h"

using namespace std;

//pointer
//����
//����* = int*, char*, float* -> �ּҰ� -> �޸� ��ġ ����Ű�� ȭ��ǥ
//���
//*���� = *First -> ȭ��ǥ�� ����Ű�� �޸� ��ġ�� ��
//&���� = ������ �޸� ��ġ(����, Address)
void Swap(int* First, int* Second)
{
	int Temp = *First;
	*First = *Second;
	*Second = Temp;
}

int main()
{
	int A = 3;
	int B = 4;

	cout << &A << endl;

	Swap(&A, &B);
	//cout << A << endl;
	//cout << B << endl;
	//cout << Add(A, B) << endl;
	//cout << Sub(A, B) << endl;
	//cout << Mul(A, B) << endl;
	//cout << Div(A, B) << endl;
	//cout << Mod(A, B) << endl;
	return 0;
}