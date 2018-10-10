//@author Gary Kelly
//student id: C00207281
//date: 1/10/18
#include "Character.h"
#include "Troll.h"
#include "Orc.h"
#include <iostream>
#include <ctime>
void characterChoose(bool &p_orc, bool &p_troll);
int chooseActionOrc(int t_num );
int chooseActionTroll(int t_num);


enum class AttackType 
{
	MELEE,
	SPELL
};

struct Attacks
{
	AttackType attacking;
};

struct Player
{
	
}Player;

enum class playerType
{
	ORC,
	TROLL
};

int main()
{
	Player player;
	bool gameRun{ true };
	int actionOrc{ 0 };
	int actionTroll{ 0 };
	bool playerAsOrc{ false };
	bool playerAsTroll{ false };
	bool fighting{ true };
	char playerChoose{  };
	std::cout << "ORCS VS TROLLS" << std::endl;
	std::cout << "FIGHT" << std::endl;
	
	Character *characters[2];
	characters[0] = new Orc;
	characters[1] = new Troll;
	characterChoose(playerAsOrc, playerAsTroll);
	while (gameRun)
	{
		if (playerAsOrc)
		{
			actionOrc = chooseActionOrc(1);
			actionTroll = chooseActionTroll(2);
		}
		else if (playerAsTroll)
		{
			actionTroll = chooseActionTroll(1);
			actionOrc = chooseActionOrc(2);
		}
		if (actionOrc == 1)
		{

		}
		else if (actionOrc == 2)
		{

		}
		if (actionTroll == 1)
		{

		}
		else if (actionTroll == 2)
		{

		}
	}

	
	system("pause");
	return 0;
}



void characterChoose(bool &p_orc, bool &p_troll)
{
	char playerChoose{};
	 
	std::cout << "Choose Orc(o) or Troll(t)" << std::endl;
	std::cin >> playerChoose;
	while (playerChoose != 'o' && playerChoose != 't')
	{
		std::cout << "Choose Orc(o) or Troll(t)" << std::endl;
		std::cin >> playerChoose;
	}
	if (playerChoose == 'o')
	{
		
	}
	else
	{
		
	}
}

int chooseActionOrc(int t_num)
{
	char action{};
	if (t_num ==1)
	{
		std::cout << "Choose Action: Attack(a) or Defend(d)" << std::endl;
		std::cin >> action;
		while (action != 'a' && action != 'd')
		{
			std::cout << "Invalid input" << std::endl;
			std::cout << "Choose Action: Attack(a) or Defend(d)" << std::endl;
			std::cin >> action;
		}
		if (action == 'a')
		{
			return 1;
		}
		else if (action == 'd')
		{
			return 2;
		}


	}
	else
	{
		return (rand() % 2) + 1;
	
	}
}

int chooseActionTroll(int t_num)
{
	char action{};
	if (t_num == 1)
	{
		std::cout << "Choose Action: Attack(a) or Defend(d)" << std::endl;
		std::cin >> action;
		while (action != 'a' && action != 'd')
		{
			std::cout << "Invalid input" << std::endl;
			std::cout << "Choose Action: Attack(a) or Defend(d)" << std::endl;
			std::cin >> action;
		}
		if (action == 'a')
		{
			return 1;
		}
		else if (action == 'd')
		{
			return 2;
		}


	}
	else
	{
		return (rand() % 2) + 1;

	}
}








