#ifndef REDONCULUS_SERVER_H
#define REDONCULUS_SERVER_H

#include "engine.h"

class GameStateLogger;

class EpsilonServer : public GameServer
{
    P<GameStateLogger> state_logger;
public:
    EpsilonServer();
    virtual ~EpsilonServer();

    virtual void onNewClient(int32_t client_id);
    virtual void onDisconnectClient(int32_t client_id);
};

void disconnectFromServer();

#endif//REDONCULUS_SERVER_H
