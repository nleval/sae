#include "image.h"

Image::Image(string pTitre, string pCategorie, string pChemin):
    titre(pTitre),
    categorie(pCategorie),
    chemin(pChemin){}

Image::Image(const Image& source) :
    titre(source.titre),
    categorie(source.categorie),
    chemin(source.chemin){}

Image::~Image()
{

}

string Image::getCategorie() const
{
    return categorie;
}

string Image::getTitre() const
{
    return titre;
}

string Image::getChemin() const
{
    return chemin;
}

void Image::afficher() const
{
    cout << "image(titre:" << getTitre() << ", categorie:"
         << getCategorie() << ", chemin:"<< getChemin() << ")" << endl;
}

void Image::setTitre(string t)
{
    titre = t;
}

void Image::setCategorie(string c)
{
     categorie = c;
}

void Image::setChemin(string c)
{
    chemin = c;
}

Image Image::operator=(const Image& source) {
    // Vérifie si l'objet n'est pas lui-même
    if (this != &source) {
        // Copie les membres de source dans *this
        titre = source.titre;
        categorie = source.categorie;
        chemin = source.chemin;
    }
    // Retourne une référence à l'objet courant
    return *this;
}
