// Firstcpp_program.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <string>
#include <unordered_map>

// TODO: Reference additional headers your program requires here.

class Firstcpp_program {
private:
	std::unordered_map<std::string, std::string> data;

public:
	void SetKey(const std::string& key, const std::string& value);
	std::string GetKey(const std::string& key);
};

