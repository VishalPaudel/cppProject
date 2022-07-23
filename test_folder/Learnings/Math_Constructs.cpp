
/*
 * Author : Vishal Paudel
 * About : Math library and special constructs
 */

#include <iostream>
#include <cmath>


int main() {
     
    std::cout << "Square root: " << std::sqrt(25) << std::endl;
    std::cout << "Not a number: " << std::sqrt(-25) << std::endl;
    std::cout << "-Infinity" << std::pow(9, 999) << std::endl;
    
    // Similar way to do the same 
    std::cout << -INFINITY << std::endl;
    std::cout << -INFINITY << std::endl;

    // modulo
    
    std::cout << 10 % 3 << std::endl;
    // gives error : // std::cout << 10 % 3.25 << std::endl;
    // A way to overcome this is:
    std::cout << "\nRemainder Function" << std::remainder(10, 3.25) << std::endl;
    std::cout << "Or using fmod" << std::fmod(10, 3.25) << std::endl;

    // fmin and fmax, allows only for two values
    std::cout << "Smallest: " << std::fmin(-1, 20) << std::endl;

    // floor and ciel
    std::cout << std::floor(-1.25) << std::endl;

    // trunc
    std::cout << "Truncates all behind decimal " << std::trunc(-1.25) << std::endl;
    
    // round, different types of rounding : nearbyint
    std::cout << "Rounds: " << round(-3.4999) << std::endl;

    return EXIT_SUCCESS;

}
