#include "Orc.h"

Orc::Orc()
{
	
	
}

void Orc::attack(int t_num)
{
	char attackType{};
	if (t_num == 0)
	{
		std::cout << "Melee attacks left: " << m_orcMelees << std::endl;
		std::cout << "Spell attacks left: " << m_orcSpells << std::endl;
		std::cout << "Choose Melee attack m for melee, s for spell" << std::endl;
		std::cin >> attackType;
		while (attackType != 'm' && attackType != 's')
		{
			std::cout << "invalid choice. try again" << std::endl;
			std::cin >> attackType;
		}
		if (attackType == 'm')
		{
			if (m_orcMelees != 0)
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
			if (m_orcSpells != 0)
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
			if (m_orcMelees != 0)
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
			if (m_orcSpells != 0)
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

void Orc::defend(int t_num)
{
	if (m_orcShields == 0)
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
		m_meleeAttack = false;
		m_spellAttack = false;
		m_defending = true;
		m_orcShields--;
		m_orcMelees++;
	}
}

int Orc::getdamage()
{
	if (m_meleeAttack)
	{
		return m_meleeDamage;
	}
	else if (m_spellAttack)
	{
		return m_spellDamage;
	}
	else
	{
		return 0;
	}
}

void Orc::hit()
{
	m_meleeAttack = true;
	m_spellAttack = false;
	m_defending = false;
	m_orcMelees--;
	m_orcSpells++;
}

void Orc::cast()
{
	m_meleeAttack = false;
	m_spellAttack = true;
	m_defending = false;
	m_orcSpells--;
	m_orcShields++;
}

void Orc::takeDamage(int t_dam)
{
	if (m_defending)
	{
		t_dam = 0;
	}
	m_orcH -= t_dam;
}
