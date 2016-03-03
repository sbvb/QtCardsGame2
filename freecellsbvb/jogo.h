#ifndef JOGO_H
#define JOGO_H
#include <carta.h>
#include <baralho.h>
#include <vector>
#include <QMainWindow>
namespace Ui {
class jogo;
}

class jogo : public QMainWindow
{
    Q_OBJECT

public:
//    vector<Carta> Col1;
//    vector<Carta> Col2;
//    vector<Carta> Col3;
//    vector<Carta> Col4;
//    vector<Carta> Col5;
//    vector<Carta> Col6;
//    vector<Carta> Col7;
//    vector<Carta> Col8;
    explicit jogo(QWidget *parent = 0);
    ~jogo();

//    void fill();
private:
    Ui::jogo *ui;
};

#endif // JOGO_H
