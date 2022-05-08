//
// Created by Vishal Paudel on 02/05/22.
// Laboratory Session 5
//

#include <iostream>

using namespace std;


int main() {

    int i = 7;
    int arr[5] = {i, 2*i, 3*i}, *pa, *pb;  // Multiple expressions in a single line.

    pa = &arr[0];  // pa begins at the start of the arr
    pb = arr + 4;  // pa begins at start + 4, i.e the 5th element of arr, which is by default set to zero
    *pb = -99;  // changing the 0 at the end to a -99

    for (i =-4; i <= 0; ++i) {  // runs from i =-4 to i = 0 inclusive
        std::cout << pb[i] << ' ';  // since pb has been shifted rightwards, the values to the left aren't garbage
    }

    std::cout << std::endl;

    pb = arr + 5;
    std::cout << "Difference is: " << pb - pa << std::endl;

    // an experiment below
    char hello = 'H';
    char * p1 = &hello;
    char * p2 = p1 + 1;

    std::cout << p2[-1] << std::endl;

    auto var = ((p1 - p2) + 0.5);
    std:: cout << var << std::endl;

    std::cout << typeid(p1).name() << " " << typeid(var).name();
    return 0;
}
