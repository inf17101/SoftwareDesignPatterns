#ifndef __REDLIGHT_HEADERFILE__
#define __REDLIGHT_HEADERFILE__
#include "IState.h"
#include "ControlLogic.h"

class RedLight : public IState
{
    public:
        virtual void changeLight(ControlLogic* c) override;
        virtual IState::LIGHT currentLight() override;
};

#endif