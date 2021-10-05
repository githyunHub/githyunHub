#include <iostream>

using namespace std;

class Result
{

};

int main()
{
	Result* ResultPointer = new Result();
	int* IntPointer = new int();

	cout << sizeof(ResultPointer) << endl;

	delete ResultPointer;
	delete IntPointer;

	return 0;
}