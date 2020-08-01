#include "YellowLight.h"
#include "GreenLight.h"

void YellowLight::changeLight(ControlLogic* c)
{
    if(c)
        c->setState(std::make_shared<GreenLight>());
}

IState::LIGHT YellowLight::currentLight()
{
    return IState::LIGHT::YELLOW;
}