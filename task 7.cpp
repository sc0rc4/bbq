#include <iostream>

int main() {
    int start = 1;
    int end = 2;
    int bag = 100;
    int x;
    srand(time(0));
    while ( bag <= 200 and bag > 1 ){
        x = rand() % (end - start + 1) + start;
        if (x = 1 ){
            bag -= 10;
        }
        else
            bag += 9;
        std:: cout << bag << "\n";
    }
    if (bag >= 200){
        std:: cout << "you win ";
    }
    else {
        std:: cout << "you lose ";
        
    }
       return 0;
}
