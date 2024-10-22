#include <iostream>

void fibonacci(unsigned const int& number) {
    unsigned int sum;
    unsigned int firstSummand = 0;
    unsigned int secondSummand = 1;

    std::cout << firstSummand << "\n";
    std::cout << secondSummand << "\n";

    for (int i = 2; i < number; i++) {
        sum = firstSummand + secondSummand;
        firstSummand = secondSummand;
        secondSummand = sum;
        std::cout << sum << "\n";
    }
}

int main() {
    unsigned int numberChoice;

    std::cout << "Enter a number to start from:\n";
    std::cin >> numberChoice;

    fibonacci(numberChoice);
    std::cin.get();
}
