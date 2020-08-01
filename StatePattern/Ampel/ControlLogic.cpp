#include "ControlLogic.h"

ControlLogic::ControlLogic(const ConcreteState cs) : cState(cs) {}

void ControlLogic::setState(ConcreteState cs)
{
    if(cs)
        cState = cs;
}

void ControlLogic::toogleLight()
{
    if(cState)
        cState->changeLight(this);
}

IState::LIGHT ControlLogic::currentLight()
{
    return cState->currentLight();
}