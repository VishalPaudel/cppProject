
#include <iostream>
using namespace std;


// Driver Code
int main()
{

    // The enum used in switch statements is for symbolic usage

    enum class States{on, off};

    States my_bulb_state = States::on;

    switch (my_bulb_state) {
        case States::off:
            std::cout << "The Bulb has been switched off!" << '\n';
            break;

        case States::on:
            std::cout << "The Bulb has been switched on!!" << '\n';
            break;

        default:
            std::cout << "Sorry, I am Descarte, I know only dualism" << '\n';
            break;

    }

    return EXIT_SUCCESS;

}
