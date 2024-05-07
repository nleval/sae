#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QWidget>
#include <QMainWindow>
#include <QAction>
#include "modele.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class Presentation;

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    // gestion de l’attribut privé
    Presentation* getPresentation() ;
    void setPresentation (Presentation * p) ;
    // ordre de la Présentation de MAJ de l’interface en fonction de l’état du modèle
    void majInterface (Modele::UnMode u, Modele::UneAction a);

private:
    Ui::LecteurVue *ui;
    Presentation* _laPresentation;

private slots:
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
};
#endif // LECTEURVUE_H
