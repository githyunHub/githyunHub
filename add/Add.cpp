#include <iostream>
#include "Util.h"

using namespace std;

//pointer
//선언
//변수* = int*, char*, float* -> 주소값 -> 메모리 위치 가르키는 화살표
//사용
//*변수 = *First -> 화살표가 가르키는 메모리 위치의 값
//&변수 = 변수의 메모리 위치(번지, Address)
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