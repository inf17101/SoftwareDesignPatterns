#pragma once
#include <vector>
#include "VisualComponent.h"
using GraphicComponents = std::vector<VisualComponent*>;

class Window
{
    GraphicComponents _components;
public:
    Window();
    ~Window();
    void setComponent(VisualComponent* );
    void printWindow();
};
