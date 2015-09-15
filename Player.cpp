#include "Player.h"

int Player::RollDie(Dice *Die)
{
<<<<<<< HEAD
	int tmp = Die->RollDice();

	if (tmp == 1)
=======
	int RolledNumber = Die->RollDice();

	if (RolledNumber == 1)
>>>>>>> Ryan
	{
		TempScore = 0;
		Hold = true;
	}
	else
	{
<<<<<<< HEAD
		TempScore += tmp;
	}
	return tmp;
=======
		TempScore += RolledNumber;
	}
	return RolledNumber;
>>>>>>> Ryan
}

bool Player::Get_Hold()
{
	return Hold;
}

void Player::Set_Hold(bool toHold)
{
<<<<<<< HEAD
	Hold = toHold;
=======
	if (toHold)
	{
		OverallScore += TempScore;
		TempScore = 0;
		Hold = toHold;
	}
	else
	{
		Hold = false;
	}
>>>>>>> Ryan
}

int Player::Get_Score()
{
	return OverallScore;
}

int Player::Get_TempScore()
{
	return TempScore;
}