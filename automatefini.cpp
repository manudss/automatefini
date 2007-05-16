// automatefini.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
int nbretat;
std::cout << " Entrez le nombre d'etat ?" << std::endl;
std::cin >> nbretat;

int nbrelettre;
std::cout << " Entrez le nombre de lettre de l'alphabet ?" << std::endl;
std::cin >> nbrelettre;

automate A(nbretat,nbrelettre);
A.creation();

	
	system("pause");
	return 0;
}

