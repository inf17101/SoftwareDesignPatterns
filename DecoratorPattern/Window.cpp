
#include "Window.h"
#include "VisualComponent.h"

Window::Window() {}
Window::~Window()
{
    for(auto& component : _components)
        delete component;
}

void Window::setComponent(VisualComponent* c)
{
    _components.emplace_back(c);
}

void Window::printWindow()
{
    for(const auto& component : _components)
        component->draw();
}