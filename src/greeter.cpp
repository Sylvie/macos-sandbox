//
// Created by sylvie on 23.09.23.
//

#include "greeter.h"
#include <iostream>
#include <filesystem>

namespace fs = std::experimental::filesystem;

void Greeter::greet() const
{
	std::cout << "Welcome !" << std::endl;
	fs::path chemin(".");
	std::cout << "Chemin courant: " << fs::absolute(chemin) << std::endl;
}