#pragma once
#include "Character.h"
#include <iostream>

class Orc : public Character
{	
	int m_meleeDamage = 5;
	int m_spellDamage = 8;
	int m_orcH = m_health;
	int m_orcMelees = m_meleeAttacks;
	int m_orcSpells = m_spellsLeft;
	int m_orcShields = m_shields;
	bool m_orcAlive{ true };
	bool m_spellAttack{ false };
	bool m_meleeAttack{ false };
	bool m_defending{ false };
public:
	Orc();
	void attack(int t_num);
	void defend(int t_num);
	int getHealth() { return m_orcH; };
	bool getAlive() { return m_orcAlive; };
	int getdamage();
	void hit();
	void cast();
	bool isBlock() { return m_defending; };
	void takeDamage(int t_dam);
};