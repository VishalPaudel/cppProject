
// Author: Vishal Paudel
// All of this has been my own effort, and I vouch for the integrity of this
// of this assignment

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void insert_node(int *);


// Declarations of the functions
int return_size(const int *);

int return_depth(const int *);

void print_tree(const int *);


// Definitions of the functions
void insert_node(int *arr_ptr) {

    // this function has been skipped as the array representing the tree
    // is hard coded

}


int return_size(const int *arr_ptr) {

    int size = 0;

    for (int index = 0; arr_ptr[index] != -99; index++) {

        if (index == 0) {

            continue;
        } else {

            size++;
        }

    }

    return size;
}


int return_depth(const int *arr_ptr) {

    return (1 + (int) log2(return_size(arr_ptr)));
}


void print_tree(const int *arr_ptr) {

    // prints the numbers greater than 9 as A, B, C, ..., their asci character

    int depth = return_depth(arr_ptr);  // the depth of the tree, aka layers
    bool flag = false;  // wether we have hit the end of the array
    int width = (int) std::pow(2, depth) - 1;  // num of childs at lowest layer


    for (int curr_depth = 1; curr_depth <= depth; curr_depth++) {

        int curr_nodes = (int) std::pow(2, curr_depth - 1);  // child at curr depth

        // following are formating conventions
        int side_gaps = (int) std::pow(2, depth - curr_depth) - 1;
        int internal_gaps = (width - curr_nodes - 2 * side_gaps) / (curr_nodes - 1);

        // std::cout << width << ' ' << curr_nodes << ' ' << 2 * side_gaps << ' ' << curr_nodes - 1 << std::endl;


        std::cout << std::string(side_gaps, ' ');  // printing ' ' in the sides
        for (int depth_iterator = 0; depth_iterator < (int) std::pow(2, curr_depth - 1); depth_iterator++) {

            if (flag || arr_ptr[(int) std::pow(2, curr_depth - 1) + depth_iterator] == -99  /* -99 is hardcoded to be the last element by convention in my code */) {

                if (!flag) {  // we have already hit the last element

                    flag = true;

                }
                std::cout << '-';

            } else {

                int number = arr_ptr[(int) std::pow(2, curr_depth - 1) + depth_iterator];
                if (number > 9) {

                    std::cout << (char) (65 + number - 10);

                } else {

                    std::cout << number;

                }

            }

            std::cout << std::string(internal_gaps, ' ');  // gaps with ' '

        }
        std::cout << std::string(side_gaps, ' ');  // prints ' ' in sides again
        std::cout << std::endl;
    }

}


int main() {

    const int size = 10;
    int main_bin_heap[7] = {-1, 3, 6, 7, 8, 9, -99};

    // main_bin_heap[0] = -1;
    // for (int i = 1; i < (size + 1); i++) {
    //
    //     main_bin_heap[i] = i;
    // }
    // main_bin_heap[size + 1] = -99;

    std::cout << return_size(main_bin_heap) << std::endl;
    std::cout << return_depth(main_bin_heap) << '\n';
    print_tree(main_bin_heap);

    return 0;

}
