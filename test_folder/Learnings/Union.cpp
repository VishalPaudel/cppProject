//
// Created by Vishal Paudel on 04/05/22.
//

#include <iostream>

using namespace std;


union My_Union {

    int a;
    char b;
    float c;

};


int main() {

    My_Union my_union;
    
    my_union.a = 34;
    my_union.b = 34;
    my_union.c = 34.4;

    std::cout << my_union.a << sizeof(my_union.a) << std::endl;
    std::cout << my_union.b << sizeof(my_union.b) << std::endl;
    std::cout << my_union.c << sizeof(my_union.c) << std::endl;
    
    return 0;

}

