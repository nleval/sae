#ifndef DIAPO_H
#define DIAPO_H
#include <iostream>
using namespace std;
#include <vector>
#include "image.h"
#include "imagedansdiaporama.h"

class diapo
{

private :
    string titre;
    int vitesseDefilement;
    vector <imageDansDiaporama> localisationImage;
    int imageCourante;

public:
    diapo();
    diapo (const diapo&);
    ~diapo();

    int nbImages(int);
    void avancer();
    void reculer();
    void setTitre(string);
    void setVitesseDefilement(int);
    void setLocalisationImage(imageDansDiaporama&);
    void setImageCourante(int);

    string getTitre() const;
    int getVitesseDefilement() const;
    vector <imageDansDiaporama> getLocalisationImage() const;
    int getImageCourante() const;

    diapo operator=(const diapo& source);
};

#endif // DIAPO_H
