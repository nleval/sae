#include "lecteurvue.h"
#include "presentation.h"
#include "modele.h"
#include "diapo.h"
#include "image.h"
#include "imagedansdiaporama.h"
#include "sousProgrammes.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //création du modèle
    Modele *m = new Modele();
    //création de la présentation
    Presentation *p = new Presentation();
    //création de la vue
    LecteurVue w;
    //faire pointer la présentation vers la vue et le modèle
    p->setVue(&w);
    p->setModele(m);
    //faire pointer la vue vers la présentation
    w.setPresentation(p);
    //initialiser la vue en conformité avec l'état initial du modèle
    w.majInterface(m->getMode(), m->getAction());

    //aficher la vue et démarrer la boucle d'attente des messages
    w.show();
    return a.exec();
}
