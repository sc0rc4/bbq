// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    int age;
    std::cout<<"enter your age : ";
    std::cin >> age;
    if (age <= 14 ){
        std::cout << "child";
    }
    else if (age <= 24 ){
        std::cout << "young";
    }
    else if (age <= 64 ){
        std::cout << "adult";
    }
    else if  (age >= 64 ){
        std::cout << "senior";
    }
    
    return 0;
}

#include <iostream>