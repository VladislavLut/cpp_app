#include <iostream>
#include <Windows.h>


using namespace std;

int main()
{
	system("color 0A");
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(output, 11);
	cout << "Every hunter wants to know"<< endl;
	SetConsoleTextAttribute(output, 8);
	cout << "Where the pheasant goes to hide"<< endl;
	SetConsoleTextAttribute(output, 9);
	cout << "Every hunter needs to know"<< endl;
	SetConsoleTextAttribute(output, 7);
	cout << "Where the pheasant's going to hide"<< endl;
	SetConsoleTextAttribute(output, 6);
	cout << "Every fisherman wants to know"<< endl;
	SetConsoleTextAttribute(output, 12);
	cout << "Where the pike's a-gonna bite"<< endl;
	SetConsoleTextAttribute(output, 15);
	cout << "Every fisherman needs to know"<< endl;
	SetConsoleTextAttribute(output, 22);
	cout << "Where the pike's a-gonna bite)"<< endl;
	SetConsoleTextAttribute(output, 23);
}
