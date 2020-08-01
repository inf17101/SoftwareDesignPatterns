#include "GreenLight.h"
#include "YellowLight.h"

void GreenLight::changeLight(ControlLogic* c)
{
    if(c)
        c->setState(std::make_shared<YellowLight>());
}

IState::LIGHT GreenLight::currentLight()
{
    return IState::LIGHT::GREEN;
}
