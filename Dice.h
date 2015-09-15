#ifndef __DICE__
#define __DICE__

#include <time.h>

class Dice
{
  private:
	int Sides;
  public:
	int RollDice(){ Sides = 6; };

	int Set_NumSides(int);
};

#endif
