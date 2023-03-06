#include "Console.hpp"
string Console::BoolToString(bool b)
{
	return Console::BtS(b);
}

string Console::BtS(bool b)
{
	return b ? "True" : "False";
}

void Console::Print(auto str, bool newl)
{
	cout << str;
	if (newl) Console::newl();
}

template<class T, size_t N>void Console::Print(T(*tomb)[N], bool newl)
{
	for (T t : *tomb)
	{
		cout << t;
		if (newl) Console::newl();
	}
}

string Console::ReadLine()
{
	string line;
	getline(cin, line);
	return line;
}

string Console::ReadLine(string o)
{
	string line;
	cout << o;
	getline(cin, line);
	return line;
}

void Console::newl()
{
	cout << endl;
}

void Console::Init_HUN()
{
	SetConsoleCP(1250);
	SetConsoleOutputCP(1250);
	setlocale(LC_ALL, "");
}