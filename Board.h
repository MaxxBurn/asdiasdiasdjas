#include <cstdlib>
#include <iostream>

class Board
{
public :
	Board();
public:

	int playerX = 13;
	int playerY = 18;
	struct maptrix
	{
		std::string maptrix[26][20];
	}Board1, Player;
	struct BossPosition {int posx, posy;}Last_Boss,First_Boss,Second_Boss,Third_Boss;
	void Printing();
	int AKskills();

private:
	void Init();
	void Map();
	std::string className;
	
private:
	void Generate();
	
	

};

