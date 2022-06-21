
/*
 * Future: (important) . (urgent) .
 * Author: Vishal Paudel (2003)
 *
 * Motivation: To learn by doing and grinding on a particular problem
 * Scope: worst case = O( m * n ), where m = max length among the words, can we do better?
 *
 * Last Edit: June 18, 2022 (Probably giving astrological data makes more sense)
 * Note:
 */

#include <iostream>
#include <vector>
#include <unordered_set>


int main() {

    // Taking input from the console
    std::unordered_set<std::string> given_set;

    std::string curr_word;
    while (std::cin >> curr_word) {
        given_set.insert(curr_word);
    }

    long long int compound_count = 0;  // The number of the compound words in the dicitionary

    for (auto const & given_word : given_set) {

        int size_word = given_word.length();

        int i = 0;
        while (i < size_word) {
            // Starting to break the given word into suffix-s and prefix-s

            std::string prefix = given_word.substr(0, i);
            std::string suffix = given_word.substr(i, size_word - i);

            if (
                    given_set.count(prefix)
                    and
                    given_set.count(suffix)
                    ) {

                // std::cout << prefix << " + " << suffix << " = " << given_word << std::endl;
                compound_count++;
                // Both found in dictionary!

            }

            i++;

        }

    }

    std::cout << compound_count << std::endl;
    return 0;

}
// EOF
