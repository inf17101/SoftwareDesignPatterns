#ifndef __CONTROLLOGIC_HEADERFILE__
#define __CONTROLLOGIC_HEADERFILE__
#include <memory>
#include "IState.h"
typedef std::shared_ptr<IState> ConcreteState;

class ControlLogic
{
    ConcreteState cState;
    public:
        ControlLogic(const ConcreteState cs);
        virtual ~ControlLogic() = default;
        void toogleLight();
        IState::LIGHT currentLight();
        void setState(ConcreteState cs);
};

#endif