#ifndef JOGO_H
#define JOGO_H

#include <QMainWindow>

namespace Ui {
class jogo;
}

class jogo : public QMainWindow
{
    Q_OBJECT

public:
    explicit jogo(QWidget *parent = 0);
    ~jogo();

private:
    Ui::jogo *ui;
};

#endif // JOGO_H
