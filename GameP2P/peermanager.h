/**************************************************************************/
/* Class PeerManager                                                      */
/* This is a class used by every class GameClient to manage the info of   */
/* primary server and backup server.                                      */
/**************************************************************************/

#ifndef PEERMANAGER_H
#define PEERMANAGER_H

#include <QHostAddress>

class PeerManager
{
public:
    PeerManager() {}

    void setHasBackupServer(bool has) { m_hasBackupServer = has; }
    void setPrimaryServerAddr(QString ip, int port) { m_primaryServerIp = ip; m_primaryServerPort = port; }
    void setBackupServerAddr(QString ip, int port) { m_backupServerIp = ip; m_backupServerPort = port; }

    QString getPrimaryServerIp() { return m_primaryServerIp; }
    QString getBackupServerIp() { return m_backupServerIp; }
    int getPrimaryServerPort() { return m_primaryServerPort; }
    int getBackupServerPort() { return m_backupServerPort; }
    bool getHasBackupServer() { return m_hasBackupServer; }

private:
    bool m_hasBackupServer;
    QString m_primaryServerIp;
    int m_primaryServerPort;
    QString m_backupServerIp;
    int m_backupServerPort;
};

#endif // PEERMANAGER_H
