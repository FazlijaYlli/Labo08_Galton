/*
-----------------------------------------------------------------------------------
Nom du fichier    : Dictionnaire.h
Nom du labo       : Labo08_Galton Groupe L
Auteur(s)         : Jeremiah Steiner, Ylli Fazlija
Date creation     : 11.01.2022
Description (But) : Fichier d'en-tête servant de recueil de constantes
						  - des caractères et des chaînes de caractères.
                    - Le principe de ce fichier est de pouvoir changer la langue
                    - ou les termes utilisés très facilement.
Remarque(s)       :
Compilateur       : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO08_GALTON_DICTIONNAIRE_H
#define LABO08_GALTON_DICTIONNAIRE_H

#include <string>
#include <vector>

const char CARACTERE_ESPACE				=	' ';
const char CARACTERE_FIN_PROMPT			=	':';
const char CARACTERE_AFFICHAGE			=	'*';
const char CARACTERE_ESPACEMENT			=	' ';
const char CARACTERE_VALIDATION_1		=	'Y';
const char CARACTERE_VALIDATION_2		=	'y';
const char CARACTERE_REFUS_1	         =	'N';

const std::string MESSAGE_PROMPT_HAUTEUR			= "Veuillez entrer un nombre "
																	"pour la hauteur";
const std::string MESSAGE_PROMPT_BILLES			= "Veuillez entrer un nombre "
																	"pour les billes";
const std::string MESSAGE_ERREUR_NOMBRE			= "Ce nombre n'est pas valable!";
const std::string MESSAGE_FIN							= "Veuillez appuyer sur ENTER pour "
																	"quitter le programme...";
const std::string MESSAGE_DEMARRAGE					= "Labo 08 - Galton";
const std::string MESSAGE_RECOMMENCER				= "Voulez-vous recommencer ?";

const std::vector<char> CARACTERES_VALIDATION_FIN = {CARACTERE_VALIDATION_1,
																CARACTERE_VALIDATION_2};

const std::vector<char> CARACTERES_AFFICHAGE_FIN = {CARACTERE_VALIDATION_1,
                                                    CARACTERE_REFUS_1};

#endif //LABO08_GALTON_DICTIONNAIRE_H
