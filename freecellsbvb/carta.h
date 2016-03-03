#ifndef CARTA_H
#define CARTA_H
#include <iostream>
using namespace std;
enum Naipe {
    Paus, Espadas, Copas, Ouros
};

enum CartaValor {
    A, _2, _3, _4, _5, _6, _7, _8, _9, _10, J, Q, K
};

//Class Carta : public QGraphicsItem {
class Carta
{
    public:
//    int local;
    Naipe naipe;
    CartaValor valor;

    friend std::ostream & operator<<(std::ostream & out, Carta & carta) {
        string naipeStr = "empty";
        string valorStr = "empty";
        switch (carta.naipe) {
            case Paus:
                naipeStr = "Paus";
                break;
            case Espadas:
                naipeStr = "Espadas";
                break;
            case Copas:
                naipeStr = "Copas";
                break;
            case Ouros:
                naipeStr = "Ouros";
                break;
        }
//        out << naipeStr << ":" << carta.valor <<;
        return out;
    }

//    QRectF boundingRect(){
//        return QRectF();
//    }

//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
//        painter;
//    }

        Carta(Naipe n, CartaValor v): naipe(n), valor(v){
        }

//    friend ostream & operator<<(ostream & out, Carta & carta);

    static void testMe();

};
#endif // CARTA_H
