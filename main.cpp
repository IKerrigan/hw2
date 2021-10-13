#include <iostream>
#include "calculator.cpp"

int main() {
    double result = Calculator::Add(5.0, 3.0);
    std::cout << result;
    return 0;
}
