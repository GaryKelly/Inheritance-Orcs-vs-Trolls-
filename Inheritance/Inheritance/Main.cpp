//@author Gary Kelly
//student id: C00207281
//date: 1/10/18
#include "Character.h"
#include "Troll.h"
#include "Orc.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
void characterChoose();
void chooseActionPlayer();
void enemyActionChoose();




enum class playerType
{
	ORC,
	TROLL
};

struct Player
{
	playerType Race;
};


Player player;
Player com;
Character *characters[2];


int main()
{
	
	bool gameRun{ true };
	int actionOrc{ 0 };
	int actionTroll{ 0 };
	bool playerAsOrc{ false };
	bool playerAsTroll{ false };
	bool fighting{ true };
	char playerChoose{  };
	std::cout << "ORCS VS TROLLS" << std::endl;
	std::cout << "FIGHT" << std::endl;
	
	characters[0] = new Orc;
	characters[1] = new Troll;
	
	characterChoose();
	while (gameRun)
	{
		chooseActionPlayer();
		enemyActionChoose();
		characters[0]->takeDamage(characters[1]->getDamage());
		characters[1]->takeDamage(characters[0]->getDamage());
		std::cout << "Orc Health: " << characters[0]->getHealth() << std::endl;
		std::cout << "Troll Health: " << characters[1]->getHealth() << std::endl;
		if (characters[0]->getHealth()<=0)
		{
			std::cout << "Orcs have lost" << std::endl;
			gameRun = false;
		}
		else if (characters[1]->getHealth() <= 0 )
		{
			std::cout << "Trolls have lost" << std::endl;
			gameRun = false;
		}
	}
	

	
	system("pause");
	return 0;
}



void characterChoose()
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
		player.Race = playerType::ORC;
		com.Race = playerType::TROLL;
		std::cout << "You have chosen orc" << std::endl;
	}
	else
	{
		player.Race = playerType::TROLL;
		com.Race = playerType::ORC;
		std::cout << "You have chosen orc" << std::endl;
	}
}

void chooseActionPlayer()
{
	char action{};
	std::cout << "Choose an Action: a for attack, d for defend" << std::endl;
	std::cin >> action;
	
	while (action != 'a' && action != 'd')
	{
		std::cout << "Invalid action. a for attack, d for defend" << std::endl;
		std::cin >> action;
		
	}
	if (player.Race == playerType::ORC)
	{
		if (action == 'a')
		{
			characters[0]->attack(0);
		}
		else
		{
			characters[0]->defend(0);
		}
	}
	
	if (player.Race == playerType::TROLL)
	{
		if (action == 'a')
		{
			characters[1]->attack(0);
		}
	}
	else
	{
		characters[1]->defend(0);
	}
}

void enemyActionChoose()
{
	unsigned int actionNum = rand() % 2;
	if (player.Race == playerType::ORC)
	{
		if (actionNum == 0)
		{
			characters[0]->attack(0);
		}
		else
		{
			characters[0]->defend(0);
		}
	}
	
	if (player.Race == playerType::TROLL)
	{
		if (actionNum == 0)
		{
			characters[1]->attack(0);
		}
		else
		{
			characters[1]->defend(0);
		}
	}
	
}

