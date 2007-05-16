#include "StdAfx.h"
#include "automate.h"
#include "etat.h"
#include <vector>


automate::automate(int nombredetat, int nombrelettre):nbretat(nombredetat),nbrlettre(nombrelettre)
{
	nbretat = nombredetat;
	tabetat.reserve(nbretat);
	//tabetat = new etat[nombredetat];
	nbrlettre = nombrelettre;
	alphabet = new char[nbrlettre];
	
}


automate::automate()
{

}

void automate::creation()
{
		std::cout << "Il y a " << nbretat << "etat" << std::endl;
		std::cout << "Il y a " << nbrlettre << "lettre" << std::endl;

		for (int i=0; i < nbrlettre; i ++)
		{
			std::cout << " Entrez la " << i  + 1 << " ieme lettre de l'alphabet ?" << std::endl;
			std::cin >> alphabet[i];		
		}

		for (int i=0;i<nbretat;i++)
		{
			std::cout << "Etat : " << i  + 1 << " : " << std::endl;
			tabetat.push_back(*new etat);
			tabetat[i].creation(alphabet, nbrlettre, nbretat);
		}
}

	



automate::~automate(void)
{
}


automate* automate::determiner(void)
{
for(int i=0; i< nbretat; i++)
	{
		// Premier etat : on cherche les etats d'entrées.
	
	
		if (tabetat[i].isentree()==true)
		{
			tabdeterm.push_back(i);

		}
		// on cree un nouveau automate qui sera l'automate derterminisé !
	}
		automatedeterm = new automate; 




	return NULL;
}
 
void automate::newetat(int nbrdetat)
	{
		for(int i = 0; i < nbrdetat; i++)
			{
				tabetat.push_back(*new etat);
			}
		
	}

void newetat(vector<int> tabnum)
	{
		
	}


void automate::determetat()
	{
		vector<int> *numdeterm;
		int i=0;
		bool trouve=false;
		numdeterm = automatedeterm.returnnumdeterm(i);
		while (trouve != true i <= automatedeterm.returnnbretat()) // test les deux tableaux pour voir si cette etat exstite déjà
			{
				i++;
				if(tabdeterm == numdeterm) 
					{
						trouve = true;
						automatedeterm.newetat()
					
					}
				numdeterm = automatedeterm.returnnumdeterm(i);
			}
		if (i == n
	}


vector<int>* automate::returnnumdeterm(int i)
	{
		return &tabetat[i].numetat;
	}

int returnnbretat()
	{
		return nbretat;
	}