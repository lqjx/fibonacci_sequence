#include <iostream>

void fibonacci(unsigned const int& number) {
    unsigned int sum;
    unsigned int firstSummand = 0;
    unsigned int secondSummand = 1;

    for (int i = 1; i <= number; i++) {
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
