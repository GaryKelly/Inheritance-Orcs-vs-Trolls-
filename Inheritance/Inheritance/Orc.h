#pragma once
#include "Character.h"

class Orc : public Character
{
public:
	void attack(int t_num);
	void defend(int t_num);
	void hit();
	void cast();
};