#pragma once
#include "stdafx.h"
#include "fleche.h"

class fleche
{
public:	fleche(void);
public:	~fleche(void);
		void creation(char *alphabet, int nbrlettre, int nbretat);
		
private: 
	char lettre;
	int etat;
};
