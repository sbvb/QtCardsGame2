#ifndef BARALHO_H
#define BARALHO_H
using std::vector;
#include <ctime>
#include <algorithm>
#include <cstdlib>
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
#endif // BARALHO_H
