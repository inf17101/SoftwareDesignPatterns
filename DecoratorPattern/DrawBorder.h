#pragma once
#include "Decorator.h"
#include "VisualComponent.h"

class DrawBorder : public Decorator
{
    unsigned int _width;
    unsigned int _height;
    unsigned int _contentWidth;
    unsigned int _contentHeight;

    void drawBorder();

    public:
        DrawBorder(VisualComponent* , unsigned int , unsigned int , unsigned int, unsigned int);
        virtual ~DrawBorder() = default;
        virtual void draw() override;
};