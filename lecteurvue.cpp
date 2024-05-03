#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    //ui->etNbImage(NbImage());
    //ui->etTitreDiapo(getTitre());

    connect(ui->bAvancer, SIGNAL(clicked()), this, SLOT(avancer()));
    connect(ui->bReculer, SIGNAL(clicked()), this, SLOT(reculer()));
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(quitter()));
    connect(ui->bLancerDiapo, SIGNAL(clicked()), this, SLOT(lancerDiapo()));
    connect(ui->bArretDiapo, SIGNAL(clicked()), this, SLOT(arreterDiapo()));
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(aProposDe()));
    connect(ui->actionChanger_diaporama, SIGNAL(triggered()), this, SLOT(changerDiapo()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(chargerDiapo()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(EnleverDiapo()));
    connect(ui->actionVitesse_de_defilement, SIGNAL(triggered()), this, SLOT(vitesseDefilement()));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

void LecteurVue::avancer()
{
    qDebug() << "bouton avancer cliqué";
}

void LecteurVue::reculer()
{
    qDebug() << "bouton reculer cliqué";
}

void LecteurVue::quitter()
{
    qDebug() << "bouton quitter cliqué";
}

void LecteurVue::lancerDiapo()
{
    qDebug() << "bouton Lancer diaporama cliqué";
}

void LecteurVue::arreterDiapo()
{
    qDebug() << "bouton du menu Arrêter diaporama cliqué";
}

void LecteurVue::aProposDe()
{
    qDebug() << "bouton du menu A propos de cliqué";
}

void LecteurVue::changerDiapo()
{
    qDebug() << "bouton du menu changer de diaporama cliqué";
}

void LecteurVue::chargerDiapo()
{
    qDebug() << "bouton du menu charger un diaporama cliqué";
}

void LecteurVue::EnleverDiapo()
{
    qDebug() << "bouton du menu enlever le diaporama cliqué";
}

void LecteurVue::vitesseDefilement()
{
    qDebug() << "bouton du menu vitesse de défilement cliqué";
}


