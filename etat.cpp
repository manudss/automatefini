#include "StdAfx.h"
#include "etat.h"
#include "fleche.h"

etat::etat(int nombrefleche)
{
	nbrfleche = nombrefleche;
	tabfleche = new fleche[nbrfleche];
	entree=false;
	sortie=false;
}

etat::etat()
{
	entree=false;
	sortie=false;
	
}

etat::~etat()
{
}

void etat::creation(char *alphabet, int nbrlettre, int nbretat)
{
	std::cout << " Entrez le nombre de flêche pour cette etat :" << std::endl;
	std::cin >> nbrfleche;

	tabfleche = new fleche[nbrfleche];

	for (int i=0;i<nbrfleche;i++)
	{
		tabfleche[i].creation(alphabet, nbrlettre, nbretat);
	}
	int choix;

	std::cout << " Cet etat est-il :(taper le chiffre correspondant) " << std::endl << "1-Etat d'entrée" << std::endl << "2-Etat de sortie"  << std::endl << "3-Les deux" << std::endl << "4-Ni l'un ni l'autre" << std::endl ;
	std::cin >> choix ;

	switch (choix)
		{
		case 1 :
		
			{
			entree = true;
			sortie = false;
			break;
			}
		case 2 : 
			{
			entree = false;
			sortie = true;
			break;
			}
		case 3 : 
			{
			entree = true;
			sortie = true;
			break;
			}
		default : break;

		}
	std::cout <<"Nature de l'état: ("<< entree<<"," << sortie<<")" << std::endl;
system("pause");
}

bool etat::isentree()
{
return entree;
}

bool etat::issortie()
{
return sortie;
}
