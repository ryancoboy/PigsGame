#include "Player.h"
#include "AI.h"

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	Player Player1;
	AI Computer1;
	Dice Die;

	while (!(Player1.Get_Score() >= 100) || !(Computer1.Get_Score() >= 100))
	{
		int input;

		while (!Player1.Get_Hold())
		{
			std::cout << "Roll Dice(1) or Hold(2)?" << endl;
			cin >> input;

			if (input == 1)
			{
				int tmp = Player1.RollDie(&Die);

				std::cout << "Dice Rolled a: " << tmp << endl;
				std::cout << "Running Score is: " << Player1.Get_TempScore();
				cout << "Current Overall Score is: " << Player1.Get_Score() << endl;
			}
			else if (input == 2)
			{
				Player1.Set_Hold(true);

				std::cout << "New Overall Score: " << Player1.Get_Score() << endl;
			}
		}
		/*
		while (!Computer1.Get_Hold())
		{
			Computer1.RollDie(&Die);

			cout << "Computers Running Score: " << Computer1.Get_TempScore();
		}
		*/


		Computer1.Set_Hold(false);
	}

	return 0;
}