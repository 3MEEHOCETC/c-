#include <iostream>

    bool accept3()
    {
        int tries = 1;
        while(tries < 4)
        {
            std::cout << "Do you want to proceed (y or n)?\n";
            char answer = 0;
            std::cin >> answer;

            switch(answer)
            {
                case 'y':
                return true;
                case 'n':
                return false;
                default:
                std::cout << "Sorry, I don't understand that.\n";
                tries = tries + 1;
            }
        }
        std::cout << "I'll take that for a no.\n";
        return false;
    }

int main() {
    //вызываем функцию внутри main
    if (accept3()) {
        std::cout << "Proceeding...\n";
    } else {
        std::cout << "Stopping.\n";
    }
    return 0;
}