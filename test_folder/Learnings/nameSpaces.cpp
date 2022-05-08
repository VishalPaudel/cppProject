
#include <iostream>

using namespace std;  // namespace directive


class Shivam {

public:
		Shivam(){};

		static void say_hello() {
				std::cout << "Hi I am Shivam's instantiation\n";
		}

};


class Vishal {

public:
		Vishal(){};

		static void say_hello() {
				std::cout << "Hello, I am Vishal's instantiation\n";
		}

};


int main() {

		Shivam::say_hello();
		Vishal::say_hello();

		return EXIT_SUCCESS;

}
