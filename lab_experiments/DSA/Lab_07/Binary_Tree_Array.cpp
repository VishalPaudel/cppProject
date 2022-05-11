
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void insert_node(int *);

int return_size(const int *);

int return_depth(const int *);

void print_tree(const int *);


void insert_node(int *arr_ptr) {

    int upper_limit = (((int) sizeof(arr_ptr)) / ((int) sizeof(int)));

    for (int index = 0; arr_ptr[index] != -99 && index < upper_limit; index++) {

        if (index == 0) {
            continue;
        }

        std::cout << arr_ptr[index] << '\n';
    }
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

    int depth = return_depth(arr_ptr);
    bool flag = false;
    int width = (int) std::pow(2, depth) - 1;


    for (int curr_depth = 1; curr_depth <= depth; curr_depth++) {

        int side_gaps = (int) std::pow(2, depth - curr_depth) - 1;
        int curr_nodes = (int) std::pow(2, curr_depth - 1);
        int internal_gaps = (width - curr_nodes - 2 * side_gaps) / (curr_nodes - 1);


        std::cout << std::string(side_gaps, ' ');
        for (int depth_iterator = 0; depth_iterator < (int) std::pow(2, curr_depth - 1); depth_iterator++) {

            if (flag || arr_ptr[(int) std::pow(2, curr_depth - 1) + depth_iterator] == -99) {

                if (!flag) {
                    flag = true;
                }
                std::cout << '-';
                std::cout << std::string(internal_gaps, ' ');

            } else {

                std::cout << arr_ptr[(int) std::pow(2, curr_depth - 1) + depth_iterator];
                std::cout << std::string(internal_gaps, ' ');
            }
        }
        std::cout << std::string(side_gaps, ' ');
        std::cout << std::endl;
    }
    return;
}


int main() {

    int main_bin_heap[20] = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, -99};

    std::cout << return_size(main_bin_heap) << std::endl;
    std::cout << return_depth(main_bin_heap) << '\n';
    print_tree(main_bin_heap);

    return 0;


}
