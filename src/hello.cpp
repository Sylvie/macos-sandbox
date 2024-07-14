//
// Created by sylvie on 19.08.23.
//
#include "iostream"
#include <filesystem>

namespace fs = std::filesystem;

int main() {
	std::cout << "Hello world!" << std::endl;
	fs::path chemin(".");
	std::cout << "Chemin courant: " << fs::absolute(chemin) << std::endl;
}