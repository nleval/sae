#include "presentation.h"
#include "lecteurvue.h"

Presentation::Presentation(QObject *parent)
    : QObject{parent}
{

}

Modele *Presentation::getModele()
{
    return _leModele;
}

LecteurVue *Presentation::getVue()
{
    return _laVue;
}

void Presentation::setModele(Modele *m)
{
    _leModele = m;
}

void Presentation::setVue(LecteurVue *v)
{
    _laVue = v;
}

void Presentation::demandeAvancer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    _leModele->avancer(pDiaporama, pPosImageCourante);
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeReculer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    _leModele->reculer(pDiaporama, pPosImageCourante);
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeQuitter()
{
    _leModele->quitter();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeLancerDiapo()
{
    _leModele->lancerDiapo();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeArreterDiapo()
{
    _leModele->arreterDiapo();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeAProposDe()
{
    _leModele->aProposDe();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeChangerDiapo()
{
    _leModele->changerDiapo();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeChargerDiapo()
{
    _leModele->chargerDiapo();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeEnleverDiapo()
{
    _leModele->enleverDiapo();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}

void Presentation::demandeVitesseDefilement()
{
    _leModele->vitesseDefilement();
    _laVue->majInterface(_leModele->getMode(), _leModele->getAction());
}
