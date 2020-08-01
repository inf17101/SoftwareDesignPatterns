#pragma once
#include "VisualComponent.h"
#include <string>
#include <string_view>

class Box : public VisualComponent
{
    std::string _text;
    
    public:
        Box(std::string_view );
        virtual void draw() override;
        
};