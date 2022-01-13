//
// Created by Acer on 13.01.2022.
//

#include <string>
#include <limits>
#include <iostream>
#include <cstdlib>
#include "Dictionnaire.h"
#include "Utilities.h"


#define VIDER_BUFFER() std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n')

using namespace std;

const char CARACTERE_ESPACE               =  ' ';
const char CARACTERE_FIN_PROMPT           =  ':';

/// Lis un nombre entré par l'utilisateur, et retourne ledit nombre
/// \param borneMin Valeur minimale acceptable (inclue)
/// \param borneMax Valeur maximale acceptable (inclue)
/// \param msgPrompt Message de demande
/// \param msgErreur Message à Afficher en cas d'erreur
/// \param afficherBornes Est-ce que les bornes sont affichées?
/// \remark Vérification des bornes: [borneMin; borneMax]
/// \return Le nombe récupéré du flux
int LireUnNombre(int borneMin,
					  int borneMax,
					  const std::string &msgPrompt,
					  const std::string &msgErreur,
					  bool afficherBornes)
{
	bool erreur;
	int nombreLu;

	do {
		Afficher(msgPrompt, false);

		// Afficher les bornes seulement si on a besoin
		if(afficherBornes)
		{
			Afficher(CARACTERE_ESPACE, false);
			Afficher("["s + to_string(borneMin) + " - " + to_string(borneMax) + "]", false);
		}

		// Afficher fin de prompt et lire nombre
		Afficher(CARACTERE_FIN_PROMPT, false);
		Afficher(CARACTERE_ESPACE, false);
		cin >> nombreLu;

		// Vérification d'erreurs
		erreur = cin.fail() || nombreLu < borneMin || nombreLu > borneMax;
		cin.clear();
		VIDER_BUFFER();

		// La méthode Afficher retourne void, donc on ne peut pas l'utiliser dans la clause
		// du while pour afficher un message en cas d'erreur
		if(erreur)
		{
			Afficher(msgErreur);
		}

	} while(erreur);

	return nombreLu;
}

char LireChar(const std::string& msgPrompt)
{
	char charLu = ' ';

	Afficher(msgPrompt, false);
	Afficher(CARACTERE_ESPACE, false);
	Afficher(CARACTERE_FIN_PROMPT, false);

	cin >> charLu;
	cin.clear();
	VIDER_BUFFER();

	return charLu;
}

/// Affiche un message dans la console. Fonction surchargée
/// \param message Message à Afficher
/// \param retourLigne Est-ce qu'il faut faire un retour de ligne?
void Afficher(const string &message,
				  bool retourLigne)
{
	cout << message;

	if (retourLigne)
	{
		cout << endl;
	}
}

/// Affiche un caractère dans la console. Fonction surchargée
/// \param caractere Caractère à Afficher
/// \param retourLigne Est-ce qu'il faut faire un retour de ligne?
void Afficher(char caractere,
				  bool retourLigne)
{
	Afficher(string(1, caractere), retourLigne);
}