#include <iostream>  // A preprosessor directive
// programs run top to bottom

#include "Student.h"

using namespace std; 

void printSomething();  // A function prototype, or a function decalaration

// Whitespaces are ignored


// Declaring a class
class Vishal {
	// Good practice to set variables private
	public:
		// cannt do this outside functions  std::cout << "A print statement inside a class!" << std::endl;
		
		// A contructor
		Vishal(std::string name) {
			
			// gives variables an initial value;
			std::cout << "\nGets called forst when object created, the cnstructor method of Vishal Class!!" << std::endl;
			
			setName(name);

		}
		
		void Another_Function() {

			std::cout << "\n Hello, this was a method of Vishal Class!" << std::endl;

		}

		void setName(std::string x) {
			
			this->name = x;

		}

		std::string getName() {
			
			// The variable is declared and defined only below,
			// Compiler fetches it
			return name;

		}
			

	private:

			std::string name;
};


// Control Function / Entry Point
int main() {

	std::cout /* :: is the 'binary' scope resolution operator, cout is the, output stream object */
		<< /* stream insertion operator */ "Hello World, entry point started!\n" << endl; // Endline
	
	int a;  // declaration, cannot redeclare
	// a = 50; // definition, YES we can redifine
	// = is the assignment perator, while == is the EQUAL TO operator

	std::cin >> /* input stream object, stream extraction operator */ a;
	
	// evaluation 10 + 10 - 11 like (10 + 10) - 11, might overflow!, while 10 + (10 - 11)
	
	if (5 > 3) {

		cout << "Yo! Condition was true" << std::endl;

	}

	printSomething();  // The compiler does not freak out because the function was prototyped/declared abve
	// The compiler will search for this below

	// objects of classes
	Vishal another_object("Hello");
	// to access we use '.': the dot seperator
	another_object.Another_Function();
	
	Student vishu("Vishal");  // The Student class was split into:
							  // Header: For minimal pre-prcessing
							  // Source File: ISpecific Implementation
	
	std:: cout << "\nThe name of the object, with the source file linked by Makefile: ";
	vishu.printName();

	vishu.printMAX();

	int x = 20;

	std::cout << "\nx = " << x << std::endl;
	std::cout << "pre-increment, then print x = " << ++x << std::endl;
	std::cout << "print, then post increment x = " << x++ << std::endl;  // global Statement is executed first
	
	std::cout << "\nThe following runs atleast once before termination" << std::endl;
	do {
		// Runs this piece of code again and again
		std::cout << "x = " << ++x << std::endl;
	} while (/* Test */ x < 30);

	// All statements need to end with ';'
	return EXIT_SUCCESS; // return statement

}

void printSomething(/* Function Signature */) {
	
	// A function definition, function body
	
	std::cout << "\nThis function was below the int main(). "
		<< "But compiler made an effort to find this because of the declaration" << endl;

}

