#include "StdAfx.h"
#include "fleche.h"

fleche::fleche(void)
{
}

fleche::~fleche(void)
{
}

	void fleche::creation(char *alphabet, int nbrlettre, int nbretat)
	{
		std::cout << " Quel est la lettre de l'alphabet (Taper votre choix)" << std::endl;
		for (int i=0; i < nbrlettre; i ++)
		{
			std::cout << "Choix " << i + 1 << " : " << alphabet[i] << endl;		
		}
		int choix;
		std::cin >> choix;
		lettre = alphabet[choix -1];
			do {
				std::cout << " Fleche va vers quel état ?" << std::endl;
				std::cin >> etat;
			}while (etat >= 0 && etat <= nbretat);


	}
