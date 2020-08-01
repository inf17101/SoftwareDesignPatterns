#ifndef PAUSENMUSIK_H
#define PAUSENMUSIK_H


#include "IState.h"
#include <memory>

class Pausenmusik : IState
{
    protected:
        std::shared_ptr<Abspieler> abspieler;

    public:
        virtual void addTitle(std::string& title) override {}
        virtual void stopAndEmptyQueue() override {}
        virtual void pause() override {}
        virtual void resume() override {}
};

#endif