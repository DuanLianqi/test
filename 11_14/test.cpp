#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    for (int i = 0; i < 16; i++) {
        vec.push_back(i + 1);
    }

    std::cout << "before clear the contents of vec is : " << std::endl; //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
    for (auto&& i : vec) {
        std::cout << i << " ";
    }    
    std::cout << std::endl;
    std::cout << &vec[0] << std::endl;    //0x91650
    std::cout << "the before capacity of vec is : " << vec.capacity() << std::endl; //16

    vec.clear();
    vec.push_back(16);

    std::cout << "after clear the contents of vec is : " << std::endl;    //16
    for (auto&& i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << &vec[0] << std::endl;   //0x91650
    std::cout << "the after capacity of vec is : " << vec.capacity() << std::endl; //16
    return 0;
}