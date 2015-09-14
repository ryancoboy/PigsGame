#ifndef __AI__
#define __AI__

#include "Player.h"

class AI : Player
{
private:
public:
	override int RollDie(Dice *Die);
	void EndTurn();
};

#endif