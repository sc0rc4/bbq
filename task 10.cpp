#include <iostream>

int main() {
    std::string name;
    int how_much;
    
    std::cout << " write your name :";
    std::cin >> name;
    std::cout << " how many times : :";
    std::cin >> how_much;
    while (how_much != 0){
        std::cout << name << " ";
        how_much -= 1;
    }
       return 0;
}
