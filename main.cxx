
#include <iostream>

#include "FencerConfig.h"

void displayVersion();

int main(int argc, char** argv)
{
    return 0;
}

void displayVersion() {
    std::cout
        << "Fencer v"
        << Fencer_VERSION_MAJOR << "."
        << Fencer_VERSION_MINOR << "."
        << Fencer_VERSION_PATCH
        << "\n";
}
