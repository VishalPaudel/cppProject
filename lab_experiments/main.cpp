

#include <string>
#include <fstream>


using namespace std;


int main() {
    string location;
    
    std::cout << "Please Enter the File Location: ";
    std::cin >> location;

    ifstream dictFile;
    dictFile.open(location)
    
    if (dictFile.is_open()) {


            
        dictFile.close()
    
    } else {

        std::cout << "The dictionary was never Read! << std::endl;"

    }

    return EXIT_SUCCESS;

}
