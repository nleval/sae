#include "imagedansdiaporama.h"

imageDansDiaporama::imageDansDiaporama() {}

imageDansDiaporama::imageDansDiaporama(const imageDansDiaporama& source):
    rang(source.rang),
    pos(source.pos){}

imageDansDiaporama::~imageDansDiaporama() {}

int imageDansDiaporama::getRang() const
{
    return rang;
}

void imageDansDiaporama::setRang(int r)
{
    rang = r;
}

int imageDansDiaporama::getPos() const
{
    return pos;
}

void imageDansDiaporama::setPos(int p)
{
    pos = p;
}

imageDansDiaporama imageDansDiaporama::operator=(const imageDansDiaporama &source){
    // Vérifie si l'objet n'est pas lui-même
    if (this != &source) {
        // Copie les membres de source dans *this
        rang = source.rang;
        pos = source.pos;
    }
    // Retourne une référence à l'objet courant
    return *this;
}
