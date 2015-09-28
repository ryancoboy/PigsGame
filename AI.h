#ifndef __AI__
#define __AI__

#include "Player.h"

class AI : Player
{
private:
public:
	AI() : TempScore(0), OverallScore(0),Hold(false){}
	int RollDie(Dice *Die);
	
	
};

#endif