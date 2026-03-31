#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int tries = 0;
    int guess;
    std::cout << "\nWelcome to Guess User Number\n\n";

    do 
    { 
        if (secretNumber < guess)
    
    else if (secretNumber > guess)

    else
    {
        std::cout << "\nComputer won! Good game!\n";

    }
} while (secretNumber != guess);

return 0;
}
