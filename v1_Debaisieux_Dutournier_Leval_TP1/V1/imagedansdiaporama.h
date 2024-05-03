#ifndef IMAGEDANSDIAPORAMA_H
#define IMAGEDANSDIAPORAMA_H

#include <vector>
#include "image.h"

class imageDansDiaporama
{

private :
    int rang;
    int pos;

public:
    imageDansDiaporama();
    imageDansDiaporama(const imageDansDiaporama&);
    ~imageDansDiaporama();

    int getRang() const;
    int getPos() const;

    void setRang(int);
    void setPos(int);

    imageDansDiaporama operator=(const imageDansDiaporama& source);
};

#endif // IMAGEDANSDIAPORAMA_H
