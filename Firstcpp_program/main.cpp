#include <iostream>
#include "Firstcpp_program.h"

int main() {
	Firstcpp_program db;
	db.SetKey("david", "boy");
	db.SetKey("Cole", "Chelsea");

	std::cout << db.GetKey("Cole") << std::endl;


	return 0;
}
