#include <iostream>
#include "Board.h"

class PNStats : public Board
{
public:
	PNStats();
	struct Stats
	{
		int dmg, armor;
		float hp, crit;
	}Player,mob,boss;
	void Skills(int);

private:
	struct skillsE
	{std::string skill1, skill2, skill3;};

	struct Items
	{
		int dmg;
		float hp;
		float crit;
		int armor;
	}Dagger, Shield, Helmet, Gloves, Boots, Sword, Bomb, Cross, Necklace;

	void PlayerStats(int);

protected:

	std::string* ptrSkill[3];
	

	
};

