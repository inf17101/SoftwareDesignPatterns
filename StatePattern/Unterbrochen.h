#ifndef UNTERBROCHEN_H
#define UNTERBROCHEN_H

#include "IState.h"
#include <memory>

class Unterbrochen : IState
{
    protected:
        std::shared_ptr<Abspieler> abspieler;

    public:
        Unterbrochen(std::shared_ptr<Abspieler> abs) : abspieler(abs) {}
        virtual void addTitle(std::string& title) override { abspieler->addToQueue(title); abspieler->changeState(std::shared_ptr<Spielend>(new Spielend(abspieler))); }
        virtual void stopAndEmptyQueue() override {}
        virtual void pause() override {}
        virtual void resume() override {}
};

#endif