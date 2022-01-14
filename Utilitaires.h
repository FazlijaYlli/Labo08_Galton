/*
-----------------------------------------------------------------------------------
Nom du fichier    : Utilitaires.h
Nom du labo       : Labo08_Galton Groupe L
Auteur(s)         : Jeremiah Steiner, Ylli Fazlija
Date creation     : 11.01.2022
Description (But) : Fichier d'en-tête de la librairie utilitaire.
Remarque(s)       :
Compilateur       : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO08_GALTON_UTILITAIRES_H
#define LABO08_GALTON_UTILITAIRES_H

#include <vector> // Surcharge de l'opérateur de flux afin d'afficher un vecteur.

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
					  bool afficherBornes);

/// Permet de lire un character, après avoir afficher un message et
/// une liste de char en rapport avec la question, et de le renvoyer
/// \param msgPrompt une string d'affichage
/// \param affichageChars les valeurs prises en compte
/// \param afficherCharsVal boolean, true les char d'information sont affichés
/// \return le charactere saisi
char LireChar(const std::string& msgPrompt,
				  const std::vector<char>& AffichageChars,
				  bool afficherCharsVal);

/// Affiche un message dans la console. Fonction surchargée
/// \param message Message à Afficher
/// \param retourLigne Est-ce qu'il faut faire un retour de ligne?
void Afficher(const std::string& message,
				  bool retourLigne = true);

/// Affiche un caractère dans la console. Fonction surchargée
/// \param caractere Caractère à Afficher
/// \param retourLigne Est-ce qu'il faut faire un retour de ligne?
void Afficher(char caractere,
				  bool retourLigne = true);

/// Surcharge de l'opérateur de flux afin d'afficher un vecteur.
/// \param os Flux de sortie
/// \param v Vecteur à afficher.
/// \return Référence au flux de sortie.
std::ostream& operator <<(std::ostream& os,
								const std::vector<int>& v);

/// Permet de savoir si un char apparait dans une vecteur de char
/// \param c char a tester
/// \param listDeChar un vecteur de char
/// \return true si le char est dans la liste, false sinon
bool estCharDansvect(const char& c,
							const std::vector<char>& listDeChar);

#endif //LABO08_GALTON_UTILITAIRES_H
