#include "sousProgrammes.h"
#include <iostream>
#include <vector>
#include "image.h"
using namespace std;


void afficherImageCouranteDansDiaporamaCourant (const diapo& pDiaporama, unsigned int pImageCourante, const Image& pImage)
{
    cout << endl << endl;
    cout << "DIAPORAMA : " << pDiaporama.getTitre() << endl << endl;
    cout << pDiaporama.getLocalisationImage()[pImageCourante].getRang() << " sur " <<  nbImages(pDiaporama) << " / ";
    pImage.afficher();
}



void saisieVerifChoixActionSurImageCourante(char& pChoixAction)
{
    cout << endl << endl;
    while (true)
    {
        cout  << endl ;
        cout << "ACTIONS :" << "  A-vancer" << "  R-eculer" << "  C-hanger de diaporama " << "  Q-uitter .......  votre choix ? ";
        cin >> pChoixAction;
        pChoixAction = toupper(pChoixAction);

        if ((pChoixAction == 'A') || (pChoixAction == 'R') || (pChoixAction == 'C') || (pChoixAction == 'Q'))
        {
            break;
        }
    }
}

unsigned int saisieVerifChoixDiaporama(QVector<diapo> &pDiaporamas)
{
    unsigned int choixSaisi;
    int choixDiaporama; // valeur retournée

    while (true)
    {
        system("cls");  // effacer l'écran
         cout << endl << endl << "CHANGEMENT DIAPORAMA : " << endl << endl;
        for (unsigned int num = 1; num < pDiaporamas.size(); num++)
        {
            cout << num << ": " << pDiaporamas[num].getTitre();
            if (num != pDiaporamas.size()-1) { cout << endl; }
        }
        cout << ".......  votre choix ? "; cin >> choixSaisi;
        choixDiaporama = choixSaisi;

        if ((choixDiaporama >= 1)&&(choixDiaporama < static_cast<int>(pDiaporamas.size())))
        {
            break;
        }
    }
    return choixDiaporama;
}

void declencherAction(char pChoixAction, QVector<diapo>& pDiaporamas, unsigned int& pDiaporamaCourant,
                      unsigned int& pImageCourante, QVector<Image>& pImages)
/* Selon le pChoix fait l'utilisateur, réalise une des actions A)vancer, R)eculer, C)hoisir un autre diaporama, Q)quitter */
{
    unsigned int position;
    unsigned int choixDiaporama;
    switch (pChoixAction)
    {
        case 'A':
            avancer(pDiaporamas[pDiaporamaCourant], pImageCourante);
            position = pDiaporamas[pDiaporamaCourant].getLocalisationImage()[pImageCourante].getPos();
            afficherImageCouranteDansDiaporamaCourant (pDiaporamas[pDiaporamaCourant], pImageCourante, pImages[position]);
            break;
        case 'R':
            reculer(pDiaporamas[pDiaporamaCourant], pImageCourante);
            position = pDiaporamas[pDiaporamaCourant].getLocalisationImage()[pImageCourante].getPos();
            afficherImageCouranteDansDiaporamaCourant (pDiaporamas[pDiaporamaCourant], pImageCourante, pImages[position]);
            break;
        case 'C' :
            cout << "Choisissez un Diaporama " << endl;
            choixDiaporama = saisieVerifChoixDiaporama(pDiaporamas);
            // Changer de diaporama
            pDiaporamaCourant = choixDiaporama;
            pImageCourante = 0;
            break;

        default :
            break;
    }
}


void charger(QVector<diapo>& pDiaporamas)
{
    Image imageACharger;
    imageDansDiaporama imageDansDiapo;
    diapo diaporama;

    // Diaporama par défaut
    diaporama.setTitre("Diaporama par defaut");
    diaporama.setVitesseDefilement(1);

    // L'unique image du diaporama par défaut
    imageDansDiapo.setPos(0);
    imageDansDiapo.setRang(1);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama.getLocalisationImage().clear();

    // Diaporama de Pantxika
    diaporama.setTitre("Diaporama Pantxika");
    diaporama.setVitesseDefilement(2);

    // Les images du diaporama de Pantxika
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(3);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(2);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(4);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(1);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama.getLocalisationImage().clear();

    // Diaporama de Thierry
    diaporama.setTitre("Diaporama Thierry");
    diaporama.setVitesseDefilement(4);

    // Les images du diaporama de Thierry
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(1);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(2);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(3);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(4);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama.getLocalisationImage().clear();

    // Diaporama de Yann
    diaporama.setTitre("Diaporama Yann");
    diaporama.setVitesseDefilement(3);

    // Les images du diaporama de Yann
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(2);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(1);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(4);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(3);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama.getLocalisationImage().clear();

    // Diaporama de Manu
    diaporama.setTitre("Diaporama Manu");
    diaporama.setVitesseDefilement(1);

    // Les images du diaporama de Yann
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(4);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(3);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(2);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(1);
    diaporama.getLocalisationImage().push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama.getLocalisationImage().clear();

}
void charger (QVector<Image>& pImages)
{
    Image imageACharger;

    imageACharger = Image("objet", "", "C:\\cartesDisney\\Disney_tapis.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("personnage", "Blanche Neige", "C:\\cartesDisney\\Disney_4.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("personnage", "Alice", "C:\\cartesDisney\\Disney_2.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("animal", "Mickey", "C:\\cartesDisney\\Disney_19.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("personnage", "Pinnochio", "C:\\cartesDisney\\Disney_29.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("objet", "chateau", "C:\\cartesDisney\\Disney_0.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("personnage", "Minnie", "C:\\cartesDisney\\Disney_14.gif");
    pImages.push_back(imageACharger);

    imageACharger = Image("animal", "Bambi", "C:\\cartesDisney\\Disney_3.gif");
    pImages.push_back(imageACharger);
}

/* Corps des sous-programmes utilisés par la fonction main()
 * ------------------------------------------------------- */
void avancer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
// avance à l'image suivante de l'image courante. Revient à l'image de rang 1 si terminé
{
    if (pPosImageCourante == pDiaporama.getLocalisationImage().size() - 1)
    {
        pPosImageCourante = 0;
    }
    else {
        pPosImageCourante = pPosImageCourante + 1;
    }
}
void reculer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    if (pPosImageCourante == 0)
    {
        pPosImageCourante = pDiaporama.getLocalisationImage().size() - 1;
    }
    else {
        pPosImageCourante = pPosImageCourante - 1;
    }
}

unsigned int nbImages(const diapo& pDiaporama)
{
    return pDiaporama.getLocalisationImage().size();
}


void triCroissantRang (diapo &pDiaporama)
{   // par la méthode du triBulle
    unsigned int taille = pDiaporama.getLocalisationImage().size();
    imageDansDiaporama imageDansDiapo;
    for (unsigned int ici = taille-1; ici >=1 ; ici--)
    {
        // faire monter la bulle ici = déplacer l'élément de rang le plus grand en position ici
        // par échanges successifs
        for (unsigned int i = 0; i < ici; i++)
        {
            if (pDiaporama.getLocalisationImage()[i].getRang() > pDiaporama.getLocalisationImage()[i+1].getRang())
            {
                // echanger les 2 éléments
                imageDansDiapo = pDiaporama.getLocalisationImage()[i];
                pDiaporama.getLocalisationImage()[i] = pDiaporama.getLocalisationImage()[i+1];
                pDiaporama.getLocalisationImage()[i+1] = imageDansDiapo;
            }
        }
    }
}
