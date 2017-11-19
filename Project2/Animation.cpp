#include "Animation.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

//Draw phrase in borders
void Animation::frame_phrase(string phrase, int color, int count)
{
	string g;
	g = char(176);
	for (int i = 0; i < count; i++)
	{
		cout << "\t";
	}
	colorize_text(g, color);
	colorize_text(g, color);
	cout << phrase;
	colorize_text(g, color);
	colorize_text(g, color);
	cout << endl;
}

//Draw borders
void Animation::draw_border(int amount, int color, int count)
{
	string g;
	g = char(176);

	for (int i = 0; i < count; i++)
	{
		cout << "\t";
	}
	for (int i = 0; i < amount; i++)
	{
		colorize_text(g, color);
	}
	cout << endl;
}

//Colorize text
void Animation::colorize_text(string text, int color)
{
	int color_white = 15;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
	cout << text;
	SetConsoleTextAttribute(hConsole, color_white);
}


