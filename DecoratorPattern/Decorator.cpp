#pragma once

#include "Decorator.h"
#include <iostream>

Decorator::Decorator(VisualComponent* vc) : _component(vc) {}

void Decorator::draw()
{
    _component->draw();
}

Decorator::~Decorator(){ delete _component; }