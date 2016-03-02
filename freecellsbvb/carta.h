#ifndef CARTA_H
#define CARTA_H

#endif // CARTA_H

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
    int local;
    Naipe naipe;
    CartaValor valor;

//    QRectF boundingRect(){
//        return QRectF();
//    }

//    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
//        painter;
//    }

        Carta(Naipe n, CartaValor v): naipe(n), valor(v), local(-1){
        }

//    friend ostream & operator<<(ostream & out, Carta & carta);

    static void testMe();

};
