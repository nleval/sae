#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <QObject>
#include "modele.h"

class LecteurVue;

class Presentation : public QObject
{
    Q_OBJECT
public:
    explicit Presentation(QObject *parent = nullptr);

public:
    Modele* getModele();
    LecteurVue* getVue();
    void setModele(Modele *m);
    void setVue(LecteurVue *v);
    void demandeAvancer(const diapo& pDiaporama, unsigned int& pPosImageCourante);
    void demandeReculer(const diapo& pDiaporama, unsigned int& pPosImageCourante);
    void demandeQuitter();
    void demandeLancerDiapo();
    void demandeArreterDiapo();
    void demandeAProposDe();
    void demandeChangerDiapo();
    void demandeChargerDiapo();
    void demandeEnleverDiapo();
    void demandeVitesseDefilement();

private:
    Modele *_leModele; // pointeur sur le modèle
    LecteurVue *_laVue; // pointur sur la vue

};

#endif // PRESENTATION_H
