#ifndef BARALHO_H
#define BARALHO_H

#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include "carta.h"
using std::vector;
class Baralho {

public:
    vector <Carta> m_cartas;

    void preencherDeFormaPadrao();

    void embaralhar() ;

    void dumpCartas() ;

    static void testMe() ;

    void fill();


    vector<Carta> Col1;
    vector<Carta> Col2;
    vector<Carta> Col3;
    vector<Carta> Col4;
    vector<Carta> Col5;
    vector<Carta> Col6;
    vector<Carta> Col7;
    vector<Carta> Col8;
};
#endif // BARALHO_H
