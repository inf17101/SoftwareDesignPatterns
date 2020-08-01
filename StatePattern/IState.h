#ifndef ISTATE_H
#define ISTATE_H

#include <string>

class IState
{
    public:
        virtual ~IState() = default;
        virtual void addTitle(std::string& title) = 0;
        virtual void stopAndEmptyQueue() = 0;
        virtual void pause() = 0;
        virtual void resume() = 0;
};

#endif