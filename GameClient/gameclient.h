#ifndef GAMECLIENT_H
#define GAMECLIENT_H

#include <QObject>

class GameState;
class Connection;

class GameClient : public QObject
{
    Q_OBJECT

public:
    enum Status {OFF, WAIT, ON};

    GameClient();
    ~GameClient();
    void connectToServer(QString host, int port);
    Status getClientStatus() { return m_status; }
    GameState *getGameState() { return m_gameState; }

signals:
    void newClientInfo(QString info);
    void newPrimaryServerInfo(QString info);
    void newBackupServerInfo(QString info);
    void newLog(QString log);
    void initGameState(GameState* gs);
    void gameOver();

public slots:
    void handleNewGreeting(QByteArray greeting);
    void handleNewState(QByteArray state);
    void handleTryMove(QString move);
    void handleGameOver();

private:
    Status m_status;
    QString m_myPlayerID;
    GameState *m_gameState;
    Connection *m_connection;
};

#endif // GAMECLIENT_H
