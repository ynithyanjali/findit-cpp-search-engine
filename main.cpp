
#include <iostream>
#include <string>
#include <vector>
#include <cctype>


std::string toLower(std::string text) {
    for (char& letter : text) {
        letter = static_cast<char>(
            std::tolower(static_cast<unsigned char>(letter))
        );
    }
    return text;
}
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
    std::string lowerKeyword = toLower(keyword);
    for (const std::string& document : documents) {

       if (toLower(document).find(lowerKeyword) != std::string::npos) {{
            std::cout << "Found: " << document << "\n";
            matches++;
        }
    }

    std::cout << "Total matches: " << matches << "\n";

    return 0;
}
