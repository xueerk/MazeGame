#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include "gameserver.h"

QT_BEGIN_NAMESPACE
class QLabel;
class QPushButton;
QT_END_NAMESPACE

class Dialog : public QWidget
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);

private:
    QLabel *statusLabel;
    QPushButton *quitButton;
    GameServer server;
};

#endif // DIALOG_H
