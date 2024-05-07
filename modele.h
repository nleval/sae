#ifndef MODELE_H
#define MODELE_H
#include "diapo.h"
#include <QObject>

class Modele : public QObject
{
    Q_OBJECT
public:
    enum UnMode {manuel, automatique};
    enum UneAction {avance, recule, quitte, lanceD, arreteD, aPropos, changeD, chargeD, enleveD, vitesseDefil};
    explicit Modele(UnMode u=manuel, QObject *parent = nullptr);
    UnMode getMode();
    UneAction getAction();
    void avancer(const diapo& pDiaporama, unsigned int& pPosImageCourante);
    void reculer(const diapo& pDiaporama, unsigned int& pPosImageCourante);
    void quitter();
    void lancerDiapo();
    void arreterDiapo();
    void aProposDe();
    void changerDiapo();
    void chargerDiapo();
    void enleverDiapo();
    void vitesseDefilement();

private:
    UnMode _mode;
    UneAction _action;

};

#endif // MODELE_H
