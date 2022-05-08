//
// Created by Vishal Paudel on 04/05/22.
//

#include <iostream>
#include <typeinfo>
using namespace std;


int main() {

    enum with_a_name {
        a, b, c
    };

    with_a_name vishal;
    vishal = b;

    std::cout << vishal << std::endl;


    // Use enum in the following way for symbolic usage

    enum States_of_Bulb{  on  /* This becomes 0 */,  off  /* This becomes 1 */};

    States_of_Bulb my_bulb_state = on;

    switch (my_bulb_state) {
        case off:
            std::cout << "The Bulb has been switched off!" << '\n';
            break;

        case on:
            std::cout << "The Bulb has been switched on!!" << '\n';
            break;

        default:
            std::cout << "Sorry, I am Descarte, I know only dualism" << '\n';
            break;

    }

    // There can also be symbols through anonymous enumerations

    enum{my_off, my_on};  // on is already in the global scope

    // warning: declaration does not declare anything
    // if we did enum{off, on};  // as 'on' and 'off' already on global scope

    int my_state = my_off;

    std::cout << my_on << ' ' << my_off << std::endl;  // displays 1 0
    std::cout << my_state << std::endl;  // displays 0


    // my_state is Enum data type, but what is the type of my_on??
    std::cout << "Checking for Type of the elemnts inside the enums" << '\n';
    int an_int = 1;
    std::cout << (my_on == an_int) << '\n';
    std::cout <<        my_on         << " " <<        an_int        << '\n';
    std::cout << typeid(my_on).name() << " " << typeid(an_int).name() << '\n';

    // I do not know the type of these, but they are not int
    // I think on is the member of the user defined type enum States_of_Bulb
    // just like say bob is an instance of class parent
    // on is an instance of type State_of_Bulb


    // This has been resolved now, the type of elements in enum is const int

}
