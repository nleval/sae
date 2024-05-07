#ifndef SOUS_PROGRAMMES_H
#define SOUS_PROGRAMMES_H
#include <iostream>
#include <QVector>
#include "image.h"
#include "diapo.h"
#include "imagedansdiaporama.h"
using namespace std;

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

unsigned int nbImages(const diapo& pDiaporama);    // affiche la taille du diaporama pDiaporama

void triCroissantRang (diapo& pDiaporama);
/* Tri du diaporama pDiaporama par ordre croissant de *rang* des ses images
   A garder aussi lors de l'implémentation de la BD */

#endif // SOUS_PROGRAMMES_H
