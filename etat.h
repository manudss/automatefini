#pragma once
#include "stdafx.h"
#include "fleche.h"
#include "automate.h"
#include <vector>

class etat
{
private:
	int nbrfleche;
	fleche *tabfleche;
	bool entree;
	bool sortie;
	//typedef std::vector<int> vector_int;
	vector<int> numetat;

public:
	etat();
	etat(int nombrefleche);

	void creation(char *alphabet, int nbrlettre, int nbretat);
	bool isentree();
	bool issortie();

	
public:
	~etat(void);

};
