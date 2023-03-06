#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;


namespace Console
{
	void Init_HUN();

	void Print(auto str, bool newl = false);
	template<class T, size_t N>void Print(T (*tomb)[N], bool newl = false);


	string BoolToString(bool b);
	string BtS(bool b);

	void newl();

	string ReadLine();
	string ReadLine(string o);
};

