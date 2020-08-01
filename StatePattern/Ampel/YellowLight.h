#ifndef __YELLOWLIGHT_HEADERFILE__
#define __YELLOWLIGHT_HEADERFILE__
#include "IState.h"
#include "ControlLogic.h"

class YellowLight : public IState
{
    public:
        virtual void changeLight(ControlLogic* c) override;
        virtual IState::LIGHT currentLight() override;
};

#endif