#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr(new int(5));

    std::cout << *ptr << std::endl; // Выводит 5

    *ptr = 10;

    std::cout << *ptr << std::endl; // Выводит 10

    return 0;
}