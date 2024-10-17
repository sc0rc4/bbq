#include <iostream>

int main() {
    int how_much;
    std::cout << " how many times  :";
    std::cin >> how_much;
    int first = 1;
    int seccond = 1;
    int New;
    std::cout <<"1\n1\n";
    while (how_much != 2){
        New = first + seccond;
        seccond = first;
        first = New;
        how_much -=1;
        std::cout << New << "\n";
    }

       return 0;
}