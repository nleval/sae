#ifndef IMAGE_H
#define IMAGE_H

#include <iostream>
using namespace std;

class Image
{

private:
    string titre;              // intitulé de l'image
    string categorie;          // catégorie de l'image (personne, animal, objet)
    string chemin;

public:
    Image(string pTitre = "", string pCategorie = "", string pChemin = "");
    Image(const Image&);
    ~Image();

    //Image creerImage (string pTitre="", string pCategorie="", string pChemin = "");
    string getCategorie() const;
    string getTitre() const;
    string getChemin() const;

    void afficher() const;
    void setTitre(string);
    void setCategorie(string);
    void setChemin(string);

    Image operator=(const Image& source);
};

#endif // IMAGE_H
