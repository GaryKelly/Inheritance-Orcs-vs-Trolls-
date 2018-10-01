//@author Gary Kelly
//student id: C00207281
//date: 1/10/18

#include <iostream>
#include <ctime>

class Character
{
public:
	virtual void attack() = 0;
	virtual void defend() = 0;
};

class Orc : public Character
{
public:
	void attack() {std::cout << "Orc is attacking" << std::endl;}
	void defend() {std::cout << "Orc is defending" << std::endl;}
};

class Troll : public Character
{
public:
	void attack() { std::cout << "Troll is attacking" << std::endl; }
	void defend() { std::cout << "Troll is defending" << std::endl; }
};

int main()
{
	bool fighting{ true };
	std::cout << "ORCS VS TROLLS" << std::endl;
	std::cout << "FIGHT" << std::endl;
	Character *characters[2];
	characters[0] = new Orc;
	characters[1] = new Troll;
	while (fighting)
	{

	}
	characters[0]->attack();
	std::cin.get();
	characters[1]->defend();
	std::cin.get();
	system("pause");
}