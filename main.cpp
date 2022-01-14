//TODO : Commentaires partout
/*
-----------------------------------------------------------------------------------
Nom du fichier    : main.cpp
Nom du labo       : Labo08_Galton Groupe L
Auteur(s)         : Jeremiah Steiner, Ylli Fazlija
Date creation     : 11.01.2022
Description (But) : le but du programme et non le but du labo !!
Remarque(s)       : BUG ? Entrée fausse non traité par exemple
Compilateur       : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream>        // Input-Output
#include <cstdlib>         // EXIT_SUCCESS
#include <iomanip>         // Formattage de l'affichage
#include <limits>          // Vider le buffer
#include "Galton.h"        // Classe Galton permettant de créer des instances de planches.
#include "Utilitaires.h"   // Librairie de fonctions génériques, utiles
#include "Dictionnaire.h"  // Fichier d'en-tête qui stocke nos caractères et chaînes de caractères.

#define VIDER_BUFFER() std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n')

using namespace std;

int main() {

   const int  BORNE_MIN								=    1;
   const int  BORNE_MAX_BILLE						= 1000;
   const int  BORNE_MAX_HAUTEUR					=  100;

	// message d'accueil
	Afficher(MESSAGE_DEMARRAGE, true);

	bool recommencer;
	int nbrDeBille;
	int hauteur;

	do {
		// get les input utilisateur
		nbrDeBille = LireUnNombre(BORNE_MIN,BORNE_MAX_BILLE,
										  MESSAGE_PROMPT_BILLES, MESSAGE_ERREUR_NOMBRE,
										  true);

		hauteur = LireUnNombre(BORNE_MIN, BORNE_MAX_HAUTEUR,
									     MESSAGE_PROMPT_HAUTEUR, MESSAGE_ERREUR_NOMBRE,
									  	  true);

		// création de l'objet + affichage
		Galton g((unsigned)nbrDeBille, (unsigned)hauteur);
		cout << g.getTableauBilles();
		cout << endl;
		g.AfficherTableauGraphique(CARACTERE_AFFICHAGE, CARACTERE_ESPACEMENT);


		//  lire l'entrée utilisateur pour oui ou non
		recommencer = (LireChar(MESSAGE_RECOMMENCER) == CARACTERE_VALIDATION);

	} while (recommencer);

	Afficher(MESSAGE_FIN, false);
	VIDER_BUFFER();

   return EXIT_SUCCESS;
}

