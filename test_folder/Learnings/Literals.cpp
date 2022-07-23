
/*
 * Author : Vishal Paudel
 * About : Literals, hexadecimals, etc
 */

#include <iostream>
#include <string>
#include <sstream>

int main() {

    auto x = 5U;  // A unsigned integer `C++!1 extension`

    auto y = "This is a string";

    auto z = 5UL;

    auto a = 5ull;  // An unsigned double
    
    auto b = 5.0;  // A double
    
    auto c = 5.0L;  // A long double
    
    auto d = 5.0F;  // A float

    auto e = 0x5;  // A hexa decimal
    
    auto f = 0x30;  // Value = 3*16^1 + 0*16^0 = 48
    
    auto g = 030;  // An octal value, prefixed with 0
    
    // To convert to hexa decimal
    std::stringstream h;
    h << std::hex << 30;
    auto i = h.str();

    return EXIT_SUCCESS;

}
