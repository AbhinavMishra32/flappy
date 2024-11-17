#include "Display.h"
#include <iostream>

Display::Display() : width(800), height(600) {}

void Display::render()
{
    std::cout << "Rendering Display!" << std::endl;
}