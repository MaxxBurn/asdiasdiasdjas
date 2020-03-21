#pragma once
#include <iostream>
#include "conio.h"
#include "Board.h"
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77


class Combat : public Board
{
public:
	Combat();
	
private:
	void Coordinates();
	void Battle();

};

