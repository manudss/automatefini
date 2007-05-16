#pragma once
#include "stdafx.h"
#include "etat.h"
#include <vector>

class automate
{
public:
	automate(int nombredetat, int nombrelettre);
	automate();
	void creation();
	automate* determiner();
	void newetat(int nbrdetat); // ajoute une nouvelle etat
	void newetat(vector<int> tabnum); // ajoute une nouvelle etat

	void determetat();
	vector<int>* returnnumdeterm(int i);
	int returnnbretat();


	
public:
	~automate(void);
private:
	int nbretat;
	int nbrlettre;
	char *alphabet;
	//etat *tabetat;
	std::vector<etat> tabetat;
	std::vector<int>  tabdeterm;
	automate* automatedeterm;

};
