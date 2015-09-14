#include "AI.h"

int AI::RollDie(Dice *Die)
{
	int RolledNumber = Die.RollDie();
	
	if(RolledNumber == 1)
	{
		TempScore = 0;
		Hold = true;
	}
	
	else
	{
		if(TempScore < 12)
		{
			TempScore += RolledNumber;
		}
		
		else
		{
			Hold = true;
		}
	}
}

void AI::EndTurn()
{
	OverallScore += TempScore;
	TempScore = 0;
	Hold = false;
}