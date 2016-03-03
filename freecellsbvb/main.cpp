#include "jogo.h"
#include "carta.h"
#include <QApplication>
#include "baralho.h"
#include <iostream>
#include <ctime>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jogo w;
    w.show();
//    printf ("hello world");
   std::srand ( unsigned ( std::time(0) ) );
    Baralho *baralho;
    baralho = new Baralho;
    baralho->Baralho::preencherDeFormaPadrao();
    std::cout<<baralho->m_cartas.at(6)<<endl;
    baralho->embaralhar();
    std::cout<<baralho->m_cartas.at(6)<<endl;
    baralho->embaralhar();
    std::cout<<baralho->m_cartas.at(6)<<endl;
    baralho->embaralhar();
    std::cout<<baralho->m_cartas.at(6)<<endl;
    baralho->embaralhar();
    std::cout<<baralho->m_cartas.at(6)<<endl;
    baralho->embaralhar();
    std::cout<<baralho->m_cartas.at(6)<<endl;
//    baralho->m_cartas[1];
//    cout<<baralho->m_cartas<<endl;
//    baralho->embaralhar();
//    baralho.m_cartas[1];
//    return a.exec();
}
