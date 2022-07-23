
// Do not include what has already been included in the Student.h file
// Whenever the Student.h header file is called, the Student.cpp is automatically called

#include "Student.h"

Student::Student(std::string name) {

	this->name = name;

}

void Student::printMAX() {

	std::cout << this->MAX << std::endl;

}

const int Student::returnMAX() {

	return this->MAX;

}

void Student::printName() {

	std::cout << this->name << std::endl;

}
