#include "Box.h"
#include <iostream>

Box::Box(std::string_view t) : _text(t) {}

void Box::draw()
{
    std::cout << _text;
}