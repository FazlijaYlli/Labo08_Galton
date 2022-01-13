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

	static std::random_device rd;  //Will be used to obtain a seed for the random
	std::mt19937 gen; //Standard mersenne_twister_engine seeded with rd()

public:

	Galton(int nbBille, int h) :
			hauteur(h),
			nbrDeBilles(nbBille)
	{
	   tableau.resize(h + 1); // on s'assure d'avoir la place
		InitialiseTableau();
	}

	void AfficherTableauEnLigne() const
	{
		for(int i : tableau) {
			std::cout << i << ' ';
		}
	}

	void AfficherTableauGraphique() const;

private:
    void InitialiseTableau();
};


#endif //LABO08_GALTON_GALTON_H
