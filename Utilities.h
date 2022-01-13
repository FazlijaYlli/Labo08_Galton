//
// Created by Acer on 13.01.2022.
//

#ifndef LABO08_GALTON_UTILITIES_H
#define LABO08_GALTON_UTILITIES_H

const int  BORNE_MIN								=    1;
const int  BORNE_MAX_BILLE						= 1000;
const int  BORNE_MAX_HAUTEUR					=  100;

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

char LireChar(const std::string& msgPrompt);

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

#endif //LABO08_GALTON_UTILITIES_H
