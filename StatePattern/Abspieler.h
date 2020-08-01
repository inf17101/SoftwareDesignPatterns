#ifndef ABSPIELER_H
#define ABSPIELER_H

#include "IState.h"
#include <memory>
#include <vector>

class Abspieler : public std::enable_shared_from_this<Abspieler>, public IState
{
    std::shared_ptr<IState> currentState;
    std::vector<std::string> queue{10};

    public:
        Abspieler() { currentState = shared_from_this(); }
        void addTitle(std::string& title) override { currentState->addTitle(title); }
        void stopAndEmptyQueue() override { currentState->stopAndEmptyQueue(); }
        void pause() override { currentState->pause(); }
        void resume() override { currentState->resume(); }
        void changeState(std::shared_ptr<IState> newState) { currentState = newState; }
        void addToQueue(std::string& item) { queue.emplace_back(item); }
};

#endif