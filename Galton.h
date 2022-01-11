//
// Created by Acer on 11.01.2022.
//

#ifndef LABO08_GALTON_GALTON_H
#define LABO08_GALTON_GALTON_H

#include <vector>
#include <random>

class Galton {
	const int nbrDeBilles;
	const int hauteur;
	std::vector<int> tableau;

public:

	Galton(int nbBille, int h, std::mt19937 mt) :
			hauteur(h),
			nbrDeBilles(nbBille)
	{
	   tableau.resize(h + 1); // on s'assure d'avoir la place
		InitialiseTableau(mt);
	}

	void AfficherTableauEnLigne()
	{
		for(int& i : tableau) {
			std::cout << i << ' ';
		}
	}

	void AfficherTableauEtoiles();

private:
    void InitialiseTableau(std::mt19937 mt);
};


#endif //LABO08_GALTON_GALTON_H
