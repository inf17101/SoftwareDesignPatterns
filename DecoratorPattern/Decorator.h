#pragma once

#include "VisualComponent.h"

class Decorator : public VisualComponent
{
    VisualComponent* _component;

    public:
        Decorator(VisualComponent* );
        virtual ~Decorator();
        virtual void draw() override;
};