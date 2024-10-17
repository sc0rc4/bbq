#include <iostream>

int main() {
    int years, salary, bonus;
    std::cout << "how many yars you work with us : ";
    std:: cin >> years;
    std::cout << "what is your salary : ";
    std::cin >> salary;
    if (years >= 5 ){
        bonus = salary * 5 / 100;
        std:: cout <<"your bonus is " << bonus <<"$";
    }
    else 
    std:: cout <<"no bonus :( ";

    return 0;
}
