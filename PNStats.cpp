#include "PNStats.h"

PNStats::PNStats()
{
	
}

void PNStats::Skills(int classNumber)
{
		if (classNumber == 1)
		{

		std::string classSkills[3] = {"Basic Attack",
								      "Smoke screen",
									  "Self-Injury" };
		for (int x = 0; x < 3; x++)
			ptrSkill[x] = &classSkills[x];
		PNStats::PlayerStats(classNumber);
		}
		else {
			std::string classSkills[3] = { "Basic Attack",
										 "Hero's Spirit",
										 "Adventurer (Passive)" };
			for (int x = 0; x < 3; x++)
				ptrSkill[x] = &classSkills[x];
			PNStats::PlayerStats(classNumber);
		}
}
void PNStats::PlayerStats(int classStats)
{
	if (classStats == 1)
	{
		Player.dmg = 70;
		Player.armor = 20;
		Player.hp = 300.0;
		Player.crit = 30.0;
		
	}
	else
	{
		Player.dmg = 90;
		Player.armor = 70;
		Player.crit = 10.0;
		Player.hp = 500;

	}
	
}
