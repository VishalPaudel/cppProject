//
// Created by Vishal Paudel on 02/05/22.
//

#include <iostream>
#include <cstring>

using namespace std;


int main() {

    int N;

    std::cout << "Please enter the size of the array, i.e. the number of words: ";
    std::cin >> N;
    std::cout << std::endl;

    char **main_arr = new char *[N];  // making an array of arrays, i.e. a pointer of arrays
    char buffer[100];
    unsigned long word_size = 0;

    for (int i = 0; i < N; ++i) {

        //char *input_word = new char[word_size];
        cout << "Enter word " << i + 1 << " :";

        std::cin >> buffer;  // taking the input for the word
        word_size = strlen(buffer) + 1;
        std::cout << "You entered the word " << buffer << " of size " << word_size - 1 << std::endl << std::endl;
        main_arr[i] = new char[word_size];

        strcpy(main_arr[i], buffer);
    }


    for (int i = 0; i < N; ++i)
        cout << main_arr[i] << endl;

    std::cout << std::endl;
    // printing the array forwards
    for (int i = 0; i < N; i++) {
        std::cout << main_arr[i] << std::endl;
    }

    std::cout << std::endl;
    // printing the array backwards
    for (int i = N - 1; i > -1; --i) {
        std::cout << main_arr[i] << std::endl;
    }

    for (int i = 0; i < N; ++i)
        delete[] main_arr[i];

    //  delete[] input_word;
    delete[] main_arr;

    return 0;
}
