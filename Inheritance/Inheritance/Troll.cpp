#include "Troll.h"

void Troll::attack(int t_num)
{
	char attackType{};
	if (t_num == 0)
	{
		std::cout << "Melee attacks left: " << m_trollMelees << std::endl;
		std::cout << "Spell attacks left: " << m_trollSpells << std::endl;
		std::cout << "Choose Melee attack m for melee, s for spell" << std::endl;
		std::cin >> attackType;
		while (attackType != 'm' && attackType != 's')
		{
			std::cout << "invalid choice. try again" << std::endl;
			std::cin >> attackType;
		}
		if (attackType == 'm')
		{
			if (m_trollMelees != 0)
			{
				hit();
			}
			else
			{
				std::cout << "No melees stored. casting spell instead" << std::endl;
				cast();
			}

		}
		else
		{
			if (m_trollSpells != 0)
			{
				cast();
			}
			else
			{
				std::cout << "No spells stored. melee attack instead" << std::endl;
				hit();
			}
		}
	}
	else
	{
		int num = rand() % 2;
		if (num == 0)
		{
			if (m_trollMelees != 0)
			{
				hit();
			}
			else
			{
				cast();
			}
		}
		else
		{
			if (m_trollSpells != 0)
			{
				cast();
			}
			else
			{
				hit();
			}
		}
	}
}

void Troll::defend(int t_num)
{
	if (m_trollShields == 0)
	{
		if (t_num == 0)
		{
			std::cout << "No more shields, attack instead" << std::endl;
			attack(t_num);
		}
		else
		{
			attack(t_num);
		}

	}
	else
	{
		m_defending = true;
		m_attackingMelee = false;
		m_spAtt = false;
		m_trollShields--;
		m_trollMelees++;
	}
}

void Troll::hit()
{
	m_attackingMelee = true;
	m_spAtt = false;
	m_defending = false;
	m_trollMelees--;
	m_trollSpells++;
}

void Troll::cast()
{
	m_attackingMelee = false;
	m_spAtt = true;
	m_defending = false;
	m_trollSpells--;
	m_trollShields++;
}

void Troll::takeDamage(int t_dam)
{
	if (m_defending)
	{
		t_dam = 0;
	}
	m_trollH -= t_dam;
}

int Troll::getDamage()
{
	if (m_attackingMelee)
	{
		return m_melDam;
	}
	else if (m_spAtt)
	{
		return m_spelDam;
	}
	else
	{
		return 0;
	}
}

