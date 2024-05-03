#ifndef LECTEUR_H
#define LECTEUR_H
#include <iostream>
using namespace std;
#include "diapo.h"

class Lecteur
{

private :
    int diaporamaCourant;

public:
    Lecteur();
    ~Lecteur();

    int getDiaporama() const;

    void changerDiaporama(int);
    void avancerLecteur();
    void reculer();
    void quitter();
};

#endif // LECTEUR_H
