#include "Board.h"

Board::Board()
{
	
}
void Board::Init()
{
	Board::Map();
}
void Board::Map()
{
	//Giving the matrix a rectangular form
	for (int y = 0; y < 20; y++)
	{
		for (int x = 0; x < 26; x++)
		{
			if ((y == 0 || y == 19) && (x != 0 || x != 25))
				Board1.maptrix[x][y] = "-";
			else if ((y != 0 || y != 19) && (x == 0 || x == 25))
				Board1.maptrix[x][y] = "|";
			else
				Board1.maptrix[x][y] = " ";
		}
	}
	//Player coordinates
	Player.maptrix[playerX][playerY] = "P";
	First_Boss.posx = 13;
	First_Boss.posy = 1;
	Board1.maptrix[First_Boss.posx][First_Boss.posy] = "B";
	Board::Generate();

}
void Board::Generate()
{
	//Generating coordinates of first boss
	First_Boss.posx = rand() % 12 + 1;
	First_Boss.posy = rand() % 18 + 1;
	Board1.maptrix[First_Boss.posx][First_Boss.posy] = "F";

	//Generating coordinates of second boss

	Second_Boss.posx = rand() % 10 + 14;
	Second_Boss.posy = rand() % 1 + 17;
	Board1.maptrix[Second_Boss.posx][Second_Boss.posy] = "S";

	//Generating coordinates of third boss
	
	Third_Boss.posx = 13;
	Third_Boss.posy = rand() % 19;
	Board1.maptrix[Third_Boss.posx][Third_Boss.posy] = "T";
	Board::Printing();
}
void Board::Printing()
{
	
	//Printing the map on screen
	for (int y = 0; y < 20; y++)
	{
		for (int x = 0; x < 26; x++)
		{
			std::cout << Board1.maptrix[x][y];
		}
		std::cout << "\n";
	}
}
int Board::AKskills()
{
	std::cout << "What class do you want to be?\n\n";
	std::cout << "1. Assassin\n\n";
	std::cout << "2. Knight\n\n";
	std::cin >> className;

	if (className == "1" || className == "Assassin" || className == "assassin")
		return 1;
	else if (className == "2" || className == "Knight" || className == "knight")
		return 2;
	else
		Board::AKskills();

	Board::Init();
}