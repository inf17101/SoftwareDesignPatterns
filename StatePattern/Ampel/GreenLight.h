#ifndef __GREENLIGHT_HEADERFILE__
#define __GREENLIGHT_HEADERFILE__
#include "IState.h"
#include "ControlLogic.h"

class GreenLight : public IState
{
    public:
        virtual void changeLight(ControlLogic* c) override;
        virtual IState::LIGHT currentLight() override;
};

#endif