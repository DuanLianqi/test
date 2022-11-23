#include <iostream>
#include "max.h"

int main() {
    int a, b;
    std::cout << "please input two numbers :\n";
    std::cin >> a >> b;
    std::cout << "the max of two numbers is : " << max(a, b) << std::endl;
    return 0;
}