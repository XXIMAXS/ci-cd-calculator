#include <iostream>
#include "calculator.cpp"

void test_add() {
    if (add(1, 2) == 3) {
        std::cout << "add() test passed!" << std::endl;
    } else {
        std::cout << "add() test failed!" << std::endl;
    }
}

void test_subtract() {
    if (subtract(5, 2) == 3) {
        std::cout << "subtract() test passed!" << std::endl;
    } else {
        std::cout << "subtract() test failed!" << std::endl;
    }
}

int main() {
    test_add();
    test_subtract();
    return 0;
}
