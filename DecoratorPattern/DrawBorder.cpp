#include "DrawBorder.h"
#include "VisualComponent.h"
#include "Decorator.h"
#include <iostream>
#define borderWidth '-'
#define borderHeight '|'

DrawBorder::DrawBorder(VisualComponent* vc, unsigned int w, unsigned int h, unsigned int cw, unsigned int ch) : 
Decorator(vc), _width(w), _height(h), _contentWidth(cw), _contentHeight(ch) {}

void DrawBorder::drawBorder()
{
    unsigned int i;
    for(i=0; i<_width; ++i)
        std::cout << borderWidth;

    std::cout << std::endl;

    for(i=0; i<_height; ++i)
    {
        std::cout << borderHeight;
        if(i == (_height/2))
        {
            unsigned int len = (_width - _contentWidth)/2;
            unsigned int x = 0;
            for( ; x<len; ++x)
                std::cout << " ";

            Decorator::draw();

            for(x+=_contentWidth; x<_width-2; ++x)
                std::cout << " ";
        }else
        {
            for(unsigned int j=0; j<_width-2; ++j)
                std::cout << " ";
        }
        std::cout << borderHeight << std::endl;
    }

    for(i=0; i<_width; ++i)
        std::cout << borderWidth;

    std::cout << std::endl;
}

void DrawBorder::draw()
{
    drawBorder();
}