#pragma once
#include "Character.h"
#include <iostream>

class Troll : public Character
{
	int m_melDam = 8;
	int m_spelDam = 3;
	int m_trollH = m_health;
	int m_trollMelees = m_meleeAttacks;
	int m_trollSpells = m_spellsLeft;
	int m_trollShields = m_shields;
	bool m_attackingMelee{false};
	bool m_defending{ false };
	bool m_spAtt{ false };
	bool m_trollAlive{ true };
public:
	void attack(int t_num);
	void defend(int t_num);
	int getHealth() { return m_trollH; };
	bool getAlive() { return m_trollAlive; };
	void hit();
	void cast();
	void takeDamage(int t_dam);
	int getDamage();
	bool isBlock() { return m_defending; };
};