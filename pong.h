#ifndef PONG_H
#define PONG_H

#include <QMainWindow>

namespace Ui {
class pong;
}

class pong : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit pong(QWidget *parent = 0);
    ~pong();
    
private:
    Ui::pong *ui;
};

#endif // PONG_H
