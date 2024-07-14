//
// Created by sylvie on 23.09.23.
//

#include "greeter.h"
#include <iostream>
#include <filesystem>

void Greeter::greet() const
{
	std::cout << "Welcome !" << std::endl;
	std::path chemin(".");
	std::cout << "Chemin courant: " << std::absolute(chemin) << std::endl;
}