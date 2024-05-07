#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include "presentation.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    connect(ui->bAvancer, SIGNAL(clicked()), this, SLOT(demandeAvancer()));
    connect(ui->bReculer, SIGNAL(clicked()), this, SLOT(demandeReculer()));
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demandeQuitter()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(demandeLancerDiapo()));
    connect(ui->bArretDiapo, SIGNAL(clicked()), this, SLOT(demandeArreterDiapo()));
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(demandeAProposDe()));
    connect(ui->actionChanger_diaporama, SIGNAL(triggered()), this, SLOT(demandeChangerDiapo()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(demandeChargerDiapo()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(demandeEnleverDiapo()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(demandeVitesseDefilement()));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

Presentation *LecteurVue::getPresentation()
{
    return _laPresentation;
}

void LecteurVue::setPresentation(Presentation *p)
{
    _laPresentation = p;
}

void LecteurVue::majInterface(Modele::UnMode u, Modele::UneAction a)
{
    switch (u) {
    case Modele::automatique :

    break;
    case Modele::manuel :

    break;
    default: break;
    }

    switch (a) {
    case Modele::avance:

        break;

    case Modele::recule:

        break;

    case Modele::quitte:

        break;

    case Modele::lanceD:

        break;

    case Modele::arreteD:

        break;

    case Modele::aPropos:

        break;

    case Modele::changeD:

        break;

    case Modele::chargeD:

        break;

    case Modele::enleveD:

        break;

    case Modele::vitesseDefil:

        break;
    default:
        break;
    }

}

void LecteurVue::demandeAvancer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    _laPresentation->demandeAvancer(pDiaporama, pPosImageCourante);
}

void LecteurVue::demandeReculer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    _laPresentation->demandeReculer(pDiaporama, pPosImageCourante);
}

void LecteurVue::demandeQuitter()
{
    _laPresentation->demandeQuitter();
}

void LecteurVue::demandeLancerDiapo()
{
    _laPresentation->demandeLancerDiapo();
}

void LecteurVue::demandeArreterDiapo()
{
    _laPresentation->demandeArreterDiapo();
}

void LecteurVue::demandeAProposDe()
{
    _laPresentation->demandeAProposDe();
}

void LecteurVue::demandeChangerDiapo()
{
    _laPresentation->demandeChangerDiapo();
}

void LecteurVue::demandeChargerDiapo()
{
    _laPresentation->demandeChargerDiapo();
}

void LecteurVue::demandeEnleverDiapo()
{
    _laPresentation->demandeEnleverDiapo();
}

void LecteurVue::demandeVitesseDefilement()
{
    _laPresentation->demandeVitesseDefilement();
}


