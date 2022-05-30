#include <iostream>
#include <string>

using namespace std;


int main() {

	std::string greeting = "Hello ";
	std::string end_greet = "there!";

	// Concatenating Strings
	std::cout << greeting + end_greet << std::endl;

	// Taking inputs
	std::cin >> greeting;

	// Taking the remaining input
	std::cin >> end_greet;
	
	std::cout << greeting << " | " << end_greet << std::endl;

	// Taking a whole sentence properly
	std::getline(std::cin >> std::ws, greeting);
	std::cout << greeting << std::endl;


	// EOF
	return EXIT_SUCCESS;
}

