#include "Combat.h"

Combat::Combat()
{
	Combat::Coordinates();
}
void Combat::Coordinates()
{
	while (Player.maptrix[playerX][playerY] != Board1.maptrix[13][1])
	{
		char c;
		switch (c =_getch())
		{
		case KEY_UP:
			playerY--;
			Board::Printing();
		case KEY_DOWN:
			playerY++;
			Board::Printing();
		}
	}
}
