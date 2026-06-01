#include <iostream>
#include "manager.h"

// Minecraft Mod Manager: Main Engine v1.0.0
int main() {
    std::cout << "Initializing Minecraft Mod Manager..." << std::endl;
    
    ModManager manager;
    manager.Initialize();
    
    std::cout << "Mod Manager is ready to customize your game!" << std::endl;
    return 0;
}