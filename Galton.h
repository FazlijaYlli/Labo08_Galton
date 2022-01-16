/*
-----------------------------------------------------------------------------------
Nom du fichier    : Galton.h
Nom du labo       : Labo08_Galton Groupe L
Auteur(s)         : Jeremiah Steiner, Ylli Fazlija
Date creation     : 11.01.2022
Description (But) : Fichier d'en-tête de la classe Galton. Chaque instance de
                    cette classe représente un plateau avec une hauteur
                    et un nombre de billes donné.
Remarque(s)       :
Compilateur       : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO08_GALTON_GALTON_H
#define LABO08_GALTON_GALTON_H

#include <vector>
#include <ostream>   // Permets d'afficher un tableau en utilisant un output stream.
#include <random>

/// Déclaration de la classe Galton
/// Chaque instance contient un nombre de billes et une hauteur.
/// Les propriétés nbrDeBilles et hauteur sont constantes.
/// Ceci est un choix car lorsque l'objet est instancié, on ne souhaite pas
/// qu'il soit modifié ensuite.
class Galton {

   // Propriétés de la planche
	const unsigned nbrDeBilles;
	const unsigned hauteur;
	std::vector<int> tableauBilles; // TODO : mettre en unsigned ?
	static std::random_device rd;  // Sera utilisé comme seed pour l'aléatoire.

public:
   /// Constructeur par défaut
   /// On ne l'utilisera pas.
   Galton()=delete;

   /// Constructeur par copie
   /// \param g
   Galton(Galton& g);

   /// Constructeur paramétrique
   /// \param nbBille Nombre de billes à lancer dans la planche.
   /// \param h Hauteur de la planche.
	Galton(unsigned nbBille, unsigned h);

   /// Getter simple pour obtenir le tableau de billes d'une instance.
   /// \return Tableau de billes de l'instance.
   std::vector<int> getTableauBilles() const;

   /// Permets d'afficher le tableau de billes sous forme graphique
   /// \param CARACTERE Caractère qui représentera une bille.
   /// \param ESPACE Caractère qui représentera un espace.
	void AfficherTableauGraphique(const char& CARACTERE, const char& ESPACE) const;

private:
   /// Permets de lancer les billes dans la planche et remplir le tableau de billes.
   void LancerBilles();
};


#endif //LABO08_GALTON_GALTON_H
