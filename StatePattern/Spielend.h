#ifndef SPIELEND_H
#define SPIELEND_H

#include "IState.h"
#include <memory>

class Spielend : public IState
{
    protected:
        std::shared_ptr<Abspieler> abspieler;

    public:
        Spielend(std::shared_ptr<Abspieler> abs) : abspieler(abs) {}
        virtual void addTitle (std::string& title) override
        {
            abspieler->addToQueue(title);
            abspieler->changeState(std::shared_ptr<IState>(new Spielend(abspieler)));
        }
        virtual void stopAndEmptyQueue() override {}
        virtual void pause() override {}
        virtual void resume() override {}
};

#endif