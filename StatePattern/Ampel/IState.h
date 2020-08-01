#ifndef __ISTATE_HEADERFILE__
#define __ISTATE_HEADERFILE__

class ControlLogic;

class IState
{
    public:
        enum class LIGHT {RED, YELLOW, GREEN};
        virtual ~IState() = default;
        virtual void changeLight(ControlLogic* c) = 0;
        virtual LIGHT currentLight() = 0;
};

#endif