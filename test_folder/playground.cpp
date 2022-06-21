
#include <iostream>

using namespace std;

int main() {

string s1;
int i, j, len;

std::cin >> s1;

len = s1.length();

for (i = 0; i < len; ++i) {
    std::cout << i << " ";
    for (j = 1; j <= i; ++j) {

        std::cout << " ";

    }
    
    std::cout << s1.substr(i) << std::endl;
}
}

