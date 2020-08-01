#include "ControlLogic.h"
#include "RedLight.h"
#include "IState.h"
#include <algorithm>
#include <iostream>

std::string print(IState::LIGHT light)
{
    switch (light)
    {
    case IState::LIGHT::GREEN:
        return std::string("GREEN");
    case IState::LIGHT::RED:
        return std::string("RED");
    case IState::LIGHT::YELLOW:
        return std::string("YELLOW");
    }
    return std::string("ERROR");
}

int main()
{
    auto cLogic = std::make_unique<ControlLogic>(std::make_shared<RedLight>());
    unsigned int i = 0;
    while(i<5)
    {
        std::cout << "Round: " << i << "     " << print(cLogic->currentLight()) << std::endl;
        cLogic->toogleLight();
        ++i;
    }
    return 0;
}