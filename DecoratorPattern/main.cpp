#include <iostream>
#include "Window.h"
#include "Box.h"
#include "DrawBorder.h"
#include <memory>

int main()
{
    auto window1 = std::make_shared<Window>();
    std::string text("das ist ein text in einer text box.");
    window1->setComponent(new DrawBorder(new Box(text), 70, 20, text.size(), 10));
    window1->printWindow();
    return 0;
}