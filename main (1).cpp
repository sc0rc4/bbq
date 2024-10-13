
#include <iostream>

int main() {
    int time, change, am_pm;
    std::cout << "enter your time ";
    std::cin >> time;
    
    std::cout << "enter am(1) or pm(2) ";
    std::cin >> am_pm;

    std::cout << "chenge time for :  ";
    std::cin >> change;
    
    if (time + change > 11 )
    {
        time = time + change - 12;
        if (am_pm == 1){
            am_pm = 2;
        }
        else {
            am_pm = 1;
        }
    }else {
        time = time + change;
        }
    if (am_pm == 1){
        std::cout << time << "am" ;
    }
    else {
        std::cout << time << "pm";
    }

    
    
    

    return 0;
}