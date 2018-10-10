#pragma once
#include "Character.h"

class Orc : public Character
{
public:
	void attack();
	void defend();
	void hit();
	void cast();
};