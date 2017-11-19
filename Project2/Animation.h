#pragma once

#ifndef ANIMATION_H
#define ANIMATION_H

#include <string>
using namespace std;

class Animation
{
public:
	//Draw phrase in borders
	static void frame_phrase(string, int, int count = 2);

	//Draw borders
	static void draw_border(int, int, int count = 2);

	//Colorize text
	static void colorize_text(string, int);
};

#endif

