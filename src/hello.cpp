//
// Created by sylvie on 19.08.23.
//
#include "iostream"
#include <filesystem>

int main() {
	std::cout << "Hello world!" << std::endl;
	std::path chemin(".");
	std::cout << "Chemin courant: " << std::absolute(chemin) << std::endl;
}