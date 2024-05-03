#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QWidget>
#include <QMainWindow>
#include <QAction>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

private:
    Ui::LecteurVue *ui;

private slots:
    void avancer();
    void reculer();
    void quitter();
    void lancerDiapo();
    void arreterDiapo();
    void aProposDe();
    void changerDiapo();
    void chargerDiapo();
    void EnleverDiapo();
    void vitesseDefilement();
};
#endif // LECTEURVUE_H
