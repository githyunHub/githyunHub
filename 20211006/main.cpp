#include <iostream>
//STL
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string HelloWorld = "Hello World";
	string HelloWorldInKorean = "ㄱ"; //euc-kr, utf-8
//	HelloWorld[0] = 'J';

	cout << HelloWorld.size() << endl;
	cout << HelloWorldInKorean.size() << endl;

	string UpperCase = "";
	string LowerCase = "";
	
	for (auto S : HelloWorld)
	{
		UpperCase.push_back(toupper(S));
	}

	for (auto S : HelloWorld)
	{
		LowerCase.push_back(tolower(S));
	}

	cout << UpperCase << endl;
	cout << LowerCase << endl;

	cout << HelloWorld + HelloWorldInKorean << endl;

	return 0;
}
