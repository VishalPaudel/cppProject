
#include <iostream>
#include <typeinfo>

using namespace std;


int main() {

    int my_int = 5;

    const int * pointer_to_a_constant = &my_int;

    my_int = 3;  // allowed

    std::cout << "Value at the location " << *pointer_to_a_constant << '\n';

    // *pointer_to_a_constant = 4;  // ERROR: read only variable
    // cannot be changed through the pointer

    int * const constant_pointer = &my_int;

    // constant_pointer++;  // ERROR: cannot assign a variable to const pointer?

    std::cout << "The ID of the constant pointer " << constant_pointer << '\n';

    *constant_pointer = 5;
    std::cout << "Value at the location " << *constant_pointer << '\n';
    std::cout << "Value of variable " << my_int << '\n';


    int const a = 55;  // allowed
    const int b = 44;  // Best Practice

    std::cout << typeid(a).name() << " " << typeid(b).name() << '\n';


    return EXIT_SUCCESS;

}
