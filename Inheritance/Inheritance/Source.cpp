//@author Gary Kelly
//student id: C00207281
//date: 1/10/18

#include <iostream>
#include <ctime>
void characterChoose(bool &p_orc, bool &p_troll);
int chooseActionOrc(int t_num );
int chooseActionTroll(int t_num );



class Character
{
	int health{};
	int attacksLeft{ 13 };
	int spellsLeft{ 5 };
	int meleeAttacks{ 7 };
	int shields{ 3 };
	bool attacking{};
	bool defending{};
	bool spell{};
	bool melee{};
public:
	Character();
	virtual void attack() = 0;
	virtual void hit() = 0;
	virtual void cast() = 0;
	virtual void defend() = 0;
	int getHealth() { return health; };
};

Character::Character() : 
health{ 100 }, 
attacking{false}, 
defending{ false },
spell{false},
melee{false}
{
}

class Orc : public Character
{
public:
	void attack();
	void defend();
	void hit();
	void cast();
};

class Troll : public Character
{
public:
	void attack();
	void defend();
	void hit();
	void cast();
};



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
		p_orc = true;
		std::cout << "You have picked Orcs" << std::endl;
	}
	else
	{
		p_troll = true;
		std::cout << "You have picked Trolls" << std::endl;
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


void Orc::attack()
{
	
}

void Orc::defend()
{

}

void Troll::attack()
{

}

void Troll::defend()
{

}

void Orc::hit()
{

}

void Orc::cast()
{

}

void Troll::hit()
{

}

void Troll::cast()
{

}