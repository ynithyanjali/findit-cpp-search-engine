
#include <iostream>
#include <string>
#include <vector>

int main() {

    std::vector<std::string> documents = {
        "Python is used for data analysis",
        "C++ is useful for building fast programs",
        "Search engines help find information",
        "Python and C++ are programming languages",
        "Data Structures are important in C++"
    };

    std::string keyword;
    int matches = 0;

    std::cout << "=== FINDIT SEARCH ENGINE ===\n";
    std::cout << "Enter search keyword: ";
    std::getline(std::cin, keyword);

    if (keyword.empty()) {
        std::cout << "Please enter a keyword.\n";
        return 1;
    }

    for (const std::string& document : documents) {

        if (document.find(keyword) != std::string::npos) {
            std::cout << "Found: " << document << "\n";
            matches++;
        }
    }

    std::cout << "Total matches: " << matches << "\n";

    return 0;
}
