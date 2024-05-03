#ifndef SOUS_PROGRAMMES_H
#define SOUS_PROGRAMMES_H
#include <iostream>
#include <QVector>
#include "image.h"
#include "diapo.h"
#include "imagedansdiaporama.h"
using namespace std;


/* Sous-programmes provisoires pour versions Non encore graphiques
 * -------------------------------------------------------------- */
void afficherImageCouranteDansDiaporamaCourant (const diapo& pDiaporama, unsigned int pImageCourante, const Image& pImage);
/* Affichage à l'ecran des infos de l'image courante dans son diaporama
 *    - titre du diaporama
      - image courante : titre, famille, contenu
      - rang de l'image courante dans le diaporama / nbre total d'images du diaporama */

void saisieVerifChoixActionSurImageCourante(char& pChoixAction);
// Saisie du choix d'action de l'utilisateur vis-à-vis de l'image et diaporama courants

unsigned int saisieVerifChoixDiaporama(QVector<diapo>& pDiaporamas);
// Retourne un numéro de diaporama choisi par l'utilisateur (dans la liste des diaporamas existants)

void declencherAction(char pChoixAction, QVector<diapo>& pDiaporamas, unsigned int& pDiaporamaCourant,
                      unsigned int& pImageCourante, QVector<Image>& pImages);
/* Selon le pChoix fait l'utilisateur, réalise une des actions A)vancer, R)eculer, C)hoisir un autre diaporama, Q)quitter */


/* Sous-programmes provisoires pour versions antérieures à l'implantation de la BD
----------------------------------------------------------------------------------*/
void charger (QVector<Image>& pImages);
/* Chargement du tableau des images avec seules les informations textuelles de quelques images.
   Dans une version ultérieure, ces informations seront stockées dans une Base de Données.
*/

void charger (QVector<diapo>& pDiaporamas);
/* Chargement du tableau des diaporamas avec des diaporamas préalablement construits 'en dur'.
   Dans une version ultérieure, le diaporama courant affiché par le Lecteur de diaporamas sera chargé à partir
   d'une base de données.
*/


/* Déclarations des sous-programmes utilisés par le lecteur de diaporamas
 * ---------------------------------------------------------------------- */

void avancer(const diapo& pDiaporama, unsigned int& pPosImageCourante);            // incrémente pPosImageCourante, modulo nbImages(pDiaporama)
void reculer(const diapo& pDiaporama, unsigned int& pPosImageCourante);             // décrémente pPosImageCourante, modulo nbImages(pDiaporama)
void changerDiaporama(unsigned int pNumDiaporama);    // permet de choisir un diaporama, 0 si aucun diaporama souhaité
unsigned int nbImages(const diapo& pDiaporama);    // affiche la taille du diaporama pDiaporama

void triCroissantRang (diapo& pDiaporama);
/* Tri du diaporama pDiaporama par ordre croissant de *rang* des ses images
   A garder aussi lors de l'implémentation de la BD */

#endif // SOUS_PROGRAMMES_H
