#include <iostream>
//если делаем через low, high
#include <string>


//int low = 1;
//int high = 100;
//int guess;
//после каждой попытки комп должен быть ближе
//int main() 
//{
    //if {low = guess + 1}
    //else {high = guess - 1}

int main() {
    int low = 1;
    int high = 100;
    int number;
    int many = 0;
    char response;

std::cout << "\nwelcome to PC guesses ur number!\n";
std::cout << "think of a number between 1 and 100.\n\n";

do {
    //компьютер выбирает середину текущего диапазона
    number = low + (high - low) / 2;
    many++;

    std::cout << "is it? " << number << "? (h - high, l - low, c - correct): ";
    std::cin >> response;

    if (response == 'h') {
        high = number - 1;
    } else if (response == 'l') {
        low = number + 1;
    } else if (response == 'c') {
        std::cout << "\nI got it! Get lost! " << many << " guesses!\n";
    } else {
        std::cout << "Invalid input. Use 'h', 'l', or 'c'.\n";
        many--; //не считает неверный ввод
    }
    if (low > high && response != 'c') {
        std::cout << "\nWait! Are you kidding me?\n";
        break;
    }
} while (response != 'c');

return 0;
}
