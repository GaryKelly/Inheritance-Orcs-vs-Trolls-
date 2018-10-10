#pragma once
#include "Character.h"

class Troll : public Character
{
public:
	void attack();
	void defend();
	void hit();
	void cast();
};