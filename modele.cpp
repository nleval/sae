#include "modele.h"
#include <QDebug>

Modele::Modele(UnMode u, QObject *parent)
    : QObject{parent}, _mode(u)
{
    _mode = UnMode::manuel;
}

Modele::UnMode Modele::getMode()
{
    return _mode;
}

Modele::UneAction Modele::getAction()
{
    return _action;
}

void Modele::avancer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    qDebug() << "bouton avancer cliqué";
}

void Modele::reculer(const diapo& pDiaporama, unsigned int& pPosImageCourante)
{
    qDebug() << "bouton reculer cliqué";
}

void Modele::quitter()
{
    qDebug() << "bouton quitter cliqué";
}

void Modele::lancerDiapo()
{
    qDebug() << "bouton Lancer diaporama cliqué";
}

void Modele::arreterDiapo()
{
    qDebug() << "bouton du menu Arrêter diaporama cliqué";
}

void Modele::aProposDe()
{
    qDebug() << "bouton du menu A propos de cliqué";
}

void Modele::changerDiapo()
{
    qDebug() << "bouton du menu changer de diaporama cliqué";
}

void Modele::chargerDiapo()
{
    qDebug() << "bouton du menu charger un diaporama cliqué";
}

void Modele::enleverDiapo()
{
    qDebug() << "bouton du menu enlever le diaporama cliqué";
}

void Modele::vitesseDefilement()
{
    qDebug() << "bouton du menu vitesse de défilement cliqué";
}
