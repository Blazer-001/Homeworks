#include <iostream>
#include <sstream>
#include <string>

// Задача 1
std::string RemoveSpaces(const std::string& s, const char target) {
    std::string result;

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] != target) {
            result.push_back(s[i]);
        }
    }

    return result;
}

// Задача 2
std::size_t CountWords(const std::string& s) {
    std::istringstream stream(s);
    std::string word;
    size_t count = 0;

    while (stream >> word) {
        ++count;
    }

    return count;
}



int main() {
    std::cout << RemoveSpaces("hello world", ' ') << '\n';
    std::cout << CountWords("one two three") << '\n';

    return 0;
}