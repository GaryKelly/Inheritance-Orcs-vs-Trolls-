#include "Character.h"

Character::Character() :
	m_attacking{ false },
	m_defending{ false },
	m_spell{ false },
	m_melee{ false }
{
}

void Character::takeDamage(int t_num)
{
}

int Character::getDamage()
{
	return 0;
}
