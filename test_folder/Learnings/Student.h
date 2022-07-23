#ifndef STUDENT_H
#define STUDENT_H

// Necessary libraries used by this header file
#include <iostream>
#include <string>

// You share only this file in your documentation page
// The reason why you give only the function prototypes is because
// You do not want the readers to get hold of your particular implementation
// This could mean losing intellectual properties: e.g a novel algorithm
// All of that hidden details of implementation should go in the '.cpp' of the 
// same name.

// In minecraft docs, we give only the header file, and in minecraft game we give 
// a machine dependent .exe which is the compiled version of the cpp file!

// A class header file is where we are going to put all DECLARATIONS
// All protypes, and list of functions

class Student {
	
	private:
		static const int MAX = 100;
		std::string name;
	
	public:
		Student(std::string);

		void printMAX();

		const int returnMAX();

		void printName();

};

#endif

