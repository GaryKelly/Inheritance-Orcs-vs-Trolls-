#pragma once

class Character
{
	int m_health{};
	int m_attacksLeft{ 13 };
	int m_spellsLeft{ 5 };
	int m_meleeAttacks{ 7 };
	int m_shields{ 3 };
	bool m_attacking{};
	bool m_defending{};
	bool m_spell{};
	bool m_melee{};
public:
	Character();
	virtual void attack(int t_num) = 0;
	virtual void hit() = 0;
	virtual void cast() = 0;
	virtual void defend(int t_num) = 0;
	virtual int getHealth() { return m_health; };
	virtual int getNoAttacks() { return m_attacksLeft; };
	virtual int getNoshields() { return m_shields; };
};