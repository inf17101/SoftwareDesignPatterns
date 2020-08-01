#pragma once

class VisualComponent
{
    public:
        virtual void draw() = 0;
        virtual ~VisualComponent() = default;
};