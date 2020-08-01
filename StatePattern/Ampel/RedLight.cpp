#include "RedLight.h"
#include "YellowLight.h"

void RedLight::changeLight(ControlLogic* c)
{
    if(c)
        c->setState(std::make_shared<YellowLight>());
}

IState::LIGHT RedLight::currentLight()
{
    return IState::LIGHT::RED;
}