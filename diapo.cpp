#include "diapo.h"

diapo::diapo() {}

diapo::diapo(const diapo& source):
    titre(source.titre),
    vitesseDefilement(source.vitesseDefilement),
    localisationImage(source.localisationImage),
    imageCourante(source.imageCourante){}

diapo::~diapo() {}

int diapo::nbImages(int nb)
{
    nb = 0; // calculer nb images
    return nb;
}

void diapo::avancer()
{
    int i;
    i = getImageCourante() + 1;
    setImageCourante(i);
}

void diapo::reculer()
{
    int i;
    i = getImageCourante() - 1;
    setImageCourante(i);
}

string diapo::getTitre() const
{
    return titre;
}

int diapo::getVitesseDefilement() const
{
    return vitesseDefilement;
}

vector<imageDansDiaporama> diapo::getLocalisationImage() const
{
    return localisationImage;
}

int diapo::getImageCourante() const
{
    return imageCourante;
}

void diapo::setTitre(string t)
{
    titre = t;
}

void diapo::setVitesseDefilement(int v)
{
    vitesseDefilement = v;
}

void diapo::setLocalisationImage(imageDansDiaporama& i)
{
    imageDansDiaporama localisationImage(i);
}

void diapo::setImageCourante(int i)
{
    imageCourante = i;
}

diapo diapo::operator=(const diapo& source) {
    // Vérifie si l'objet n'est pas lui-même
    if (this != &source) {
        // Copie les membres de source dans *this
        titre = source.titre;
        vitesseDefilement = source.vitesseDefilement;
        localisationImage = source.localisationImage;
        imageCourante = source.imageCourante;
    }
    // Retourne une référence à l'objet courant
    return *this;
}
