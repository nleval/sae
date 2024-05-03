#include "lecteur.h"
#include "diapo.h"
#include <QDebug>

Lecteur::Lecteur() {}

Lecteur::~Lecteur() {}

void Lecteur::changerDiaporama(int dia)
{
    diaporamaCourant = dia;
}

void Lecteur::avancerLecteur()
{
    diaporamaCourant = getDiaporama() + 1;

}

void Lecteur::reculer()
{
    diaporamaCourant = getDiaporama() - 1;
}

void Lecteur::quitter()
{
    qDebug() << "Quitter" << Qt::endl ;
}

int Lecteur::getDiaporama() const
{
   return diaporamaCourant;
}
