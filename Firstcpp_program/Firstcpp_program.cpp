// Firstcpp_program.cpp : Defines the entry point for the application.
//

#include "Firstcpp_program.h"
#include <string>

void Firstcpp_program::SetKey(const std::string& key, const std::string& value) {
	Firstcpp_program::data[key] = value;
};

std::string Firstcpp_program::GetKey(const std::string& key) {
	auto iterator = Firstcpp_program::data.find(key);
	if (iterator != data.end()) {
		std::cout << "Key has been found" << std::endl;
		return data[key];
	}
	else
	{
		return "key not found.";
	}

};
