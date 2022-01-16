/*
-----------------------------------------------------------------------------------
Nom du fichier    : main.cpp
Nom du labo       : Labo08_Galton Groupe L
Auteur(s)         : Jeremiah Steiner, Ylli Fazlija
Date creation     : 11.01.2022
Description (But) : Le but du programme est d'utiliser la classe Galton afin de
 						  définir la répartiion des billes (stoqué dans un vecteur de int)
 						  et de l'afficher sous forme graphique afin d'afficher une courbe
 						  Gaussienne.
Remarque(s)       : Les bornes min et max sont modifiables dans les
						  valeurs positives des int.
Compilateur       : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include <iostream>        // Input-Output
#include <cstdlib>         // EXIT_SUCCESS
#include <limits>          // Vider le buffer
#include "Galton.h"        // Classe Galton permettant de créer des instances de
                           // planches.
#include "Utilitaires.h"   // Librairie de fonctions génériques, utiles
#include "Dictionnaire.h"  // Fichier d'en-tête qui stocke
                           // nos caractères et chaînes de caractères.

#define VIDER_BUFFER() std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n')

using namespace std;

int main() {

   const unsigned  BORNE_MIN			         =    1;
   const unsigned  BORNE_MAX_BILLE           = 1000;
   const unsigned  BORNE_MAX_HAUTEUR		   =  100;

	// message d'accueil
	Afficher(MESSAGE_DEMARRAGE, true);

	bool recommencer;
	int nbrDeBille;
	int hauteur;

	do {
		// Stocker les entrées utilisateur
		nbrDeBille  = LireUnNombre(BORNE_MIN,
                                 BORNE_MAX_BILLE,
										   MESSAGE_PROMPT_BILLES,
                                 MESSAGE_ERREUR_NOMBRE,
										   true);

		hauteur     = LireUnNombre(BORNE_MIN,
                                 BORNE_MAX_HAUTEUR,
                                 MESSAGE_PROMPT_HAUTEUR,
                                 MESSAGE_ERREUR_NOMBRE,
                                 true);

		// Création de l'objet + affichage
		Galton g((unsigned)nbrDeBille,
               (unsigned)hauteur);

      // permet d'afficher le tableu de int en ligne
		// cout << g.getTableauBilles();
		// cout << endl;

		g.AfficherTableauGraphique(CARACTERE_AFFICHAGE,
                                 CARACTERE_ESPACEMENT);

		//  Lire l'entrée utilisateur de redémarrage
		recommencer = (estCharDansVect(
                  LireChar(MESSAGE_RECOMMENCER,
                              CARACTERES_AFFICHAGE_FIN,
                              true),
                              CARACTERES_VALIDATION_FIN));

	} while (recommencer);

	Afficher(MESSAGE_FIN, false);
	VIDER_BUFFER();

   return EXIT_SUCCESS;
}

