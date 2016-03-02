#ifndef BARALHO_H
#define BARALHO_H

#endif // BARALHO_H
#include <vector>
#include "carta.h"
class Baralho {

public:
    vector <Carta> m_cartas;

    void preencherDeFormaPadrao();

    void embaralhar() ;

    void dumpCartas() ;

    static void testMe() ;

};
