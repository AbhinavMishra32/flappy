#include "Display.h"
#include <iostream>
#include <string>

int main()
{
    Display display;
    display.render();
    std::string dummy;
    std::getline(std::cin, dummy);
    return 0;
}