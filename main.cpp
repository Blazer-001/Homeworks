#include <iostream>
#include <string>

void CountCharacters(const char str[], int &letters, int &digits, int &spaces, int &others) {
    letters = 0;
    digits = 0;
    spaces = 0;
    others = 0;

    for (int i{}; str[i] != '\0'; ++i) {
        char symbol = str[i];
        if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z')) {
            ++letters;
        } else if (symbol >= '0' && symbol <= '9') {
            ++digits;
        } else if (symbol == ' ') {
            ++spaces;
        } else {
            ++others;
        }
    }
}

int main() {
    const char text[] = "Hello world";

    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int others = 0;

    CountCharacters(text, letters, digits, spaces, others);

    std::cout << "Входная строка: " << text << '\n';
    std::cout << "Результат: Букв: " << letters << "; Цифр: " << digits << "; Пробелов: " << spaces << "; Других: " << others << '\n';

    return 0;
}
