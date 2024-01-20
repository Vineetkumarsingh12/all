#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, World!";

    // Search for "ab" in the substring starting from the third position to the end
    size_t pos = s.find("ab", s.begin() + 2, s.end());

    if (pos != std::string::npos) {
        std::cout << "Substring 'ab' found at position " << pos << std::endl;
    } else {
        std::cout << "Substring 'ab' not found in the specified range" << std::endl;
    }

    return 0;
}
